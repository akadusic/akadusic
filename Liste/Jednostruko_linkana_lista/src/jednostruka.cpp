#include <iostream>
#include <cstdlib>
#include "../includes/jednostruka.hpp"

using namespace std;

// Printanje jednostruke liste

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

void ubaciNaprijed(Node** firstElement, int data){
	Node* newFirst = new Node();
	newFirst->number = data;
	newFirst->next = (*firstElement);
	(*firstElement) = newFirst;
}

void ubaci(Node* previos_node, int data){
	if(previos_node==NULL){
		cout << "Prethodni cvor ne moze biti NULL cvor!" << endl;
		return;
	}
	
	Node* new_node=new Node();
	new_node->number=data;
	new_node->next=previos_node->next;
	previos_node->next=new_node;
}

void ubaciNazad(Node* last, int data){
	if(last==NULL){
		cout << "Zadnji ne moze biti NULL pointer" << endl;
	}
	Node* new_last=new Node();
	new_last->number=data;
	last->next=new_last;
	new_last->next=NULL;
}

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

void deleteNode(Node** head, int value){
	Node* temporary=(*head);
	Node* previos=NULL;

	if(temporary!=NULL && temporary->number==value){
		*head=temporary->next;
		delete temporary;
		return;
	} else {
		while(temporary!=NULL && temporary->number!=value){
			previos = temporary;
			temporary = temporary->next;
		}
		if(temporary==NULL){
			return;
		}
		previos->next=temporary->next;
		delete temporary;
	}
}

int main(){
	Node* head=NULL;
	Node* second=NULL;
	Node* last=NULL;

	append(&head,7);
	printList(head);
	append(&head,87);
	printList(head);
	append(&head, 123);
	printList(head);
	deleteNode(&head,87);
	printList(head);
	printList(head);
	//head = new Node();
	//second = new Node();
	//last = new Node();

	//head->number=1;
	//head->next = second;

	//second->number=2;
	//second->next = last;
	
	//last->number = 3;
	//last->next = NULL;

	//printList(head);

	//ubaciNaprijed(&head,10);

	//printList(head);

	//ubaci(second,98);

	//printList(head);

	//ubaciNazad(last, 20);

	//printList(head);
	return 0;
}
