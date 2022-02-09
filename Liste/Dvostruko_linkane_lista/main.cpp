#include <iostream>

using namespace std;

struct Node {
	int data;
	Node* previous;
	Node* next;
};

void printList(Node* head){
	Node* temporary=head;
	cout << "Nova lista je: ";
	while(temporary!=NULL){
		cout << temporary->data << " ";
		temporary=temporary->next;
	}
	cout << endl;
}

void insertInFront(Node** headRef, int number){
	Node* novi = new Node();
	novi->data=number;
	if(*headRef==NULL){
		novi->next=NULL;
		novi->previous=NULL;
		*headRef=novi;
	} else {
		novi->next=(*headRef); // Ovdje je mozda problem
		novi->previous=NULL;
		*headRef=novi;
	}
}

void insertInBack(Node* head, int number){
	Node* novi = new Node();
	novi->data=number;
	Node* temp = head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=novi; //ovdje moze biti problem
	novi->previous=temp;
	novi->next=NULL;
}

Node* deleteFromBegin(Node** head){
	Node* temp = (*head)->next;
	temp->next->previous=NULL;
	free(*head);
	return temp;
}

int main(){
	Node* first = new Node();
	Node* second = new Node();
	Node* third = new Node();

	first->data=10;
	first->next=second;
	first->previous=NULL;
	second->data=20;
	second->previous=first;
	second->next=third;
	third->data=30;	
	third->previous=second;
	third->next=NULL;
	printList(first);
	insertInFront(&first, 45);
	printList(first);
	insertInBack(first, 90);
	printList(first);
	insertInFront(&first, 231);
	insertInBack(first, 876);
	printList(first);
	Node* newHead = deleteFromBegin(&first);
	printList(newHead);
	return 0;
}
