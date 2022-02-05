#include <cwchar>
#include <iostream>

using namespace std;

struct Node {
	Node* next;
	int number;
};

void append(Node** head, int data){
	Node* new_node=new Node();
	Node* last = new Node();
	new_node->number=data;

	//Ovo je u slucaju da je lista prazna
	if((*head)==NULL){
		(*head)=new_node;
		new_node->next=NULL;
	}

	last=(*head);
	while(last->next!=NULL){
		last=last->next;
	}

	last->next=new_node;
	new_node->next=NULL;
}

Node* conncatLists(Node* first, Node* second){
	Node* result = first;
	while(result->next!=NULL){
		result=result->next;
	}
	result->next=second;
	return first;
}

//Bitna stvar (Overloading operatora + za liste spaja dvije liste budalica jedna)
Node* operator+(Node const& prvaLista, Node const& drugaLista){
	Node* result=prvaLista.next;
	while(result->next!=NULL){
		result=result->next;
	}
	result->next=drugaLista.next;
	return prvaLista.next;
}

void printList(Node* first){
	if(first==NULL){
		cout << "List je prazna!" << endl;
	}
	cout << "Lista je: ";
	while(first != NULL){
		cout << first->number << " ";
		first=first->next;
	}
	cout << endl;
}

int main(){
	Node* head1 = NULL;
	Node* head2 = NULL;
	append(&head1, 1);
	append(&head1, 3);
	append(&head1, 5);
	append(&head1, 7);
	append(&head2, 2);
	append(&head2, 4);
	append(&head2, 6);
	printList(head1);
	printList(head2);
	//printList(conncatLists(head1, head2));
	Node prvi;
	Node drugi;
	prvi.number = 12;
	drugi.number = 45;
	Node jedan,dva;
	jedan.next = head1;
	dva.next = head2;
	Node* head3 = jedan + dva;
	printList(head3);
}
