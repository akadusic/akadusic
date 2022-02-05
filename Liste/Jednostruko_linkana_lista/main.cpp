#include <cstdlib>
#include "./includes/jednostruka.hpp"
#include <iostream>

using namespace std;

bool findElement(Node* head, int value){
	Node* temp=head;
	while(temp!=NULL){
		if((temp->number)==value){
			return true;
		}
		temp=temp->next;
	}
	return false;
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

void deleteOnPosition(Node** head, int position){
	Node* temp=*head;
	if(*head==NULL){
		cout << "Lista je prazna budalica jedna" << endl;
		return;
	}

	temp=*head;
	if(position==0){
		*head=temp->next;
		free(temp);
		return;
	}

	for(int i=0;i<position;i++){
		if(temp!=NULL){
			temp=temp->next;

		}
	}
}

void deleteWholeList(Node** head){
	Node* current = *head;
	while(current!=NULL){
		*head=current->next;
		free(current);
		current=*head;
	}
	*head=NULL;
}

int duzina(Node* head){
	if(head==NULL){
		return 0;
	} else{
		return 1 + duzina(head->next);
	}
}

int returnNode(Node* head, int position){
	Node* pomocni = head;
	int count = 0;
	int rezultat=0;
	while(pomocni!=NULL){
		if(count==position){
			cout << "Usao u if uslov" << endl;
			rezultat=pomocni->number;
			break;
		} else{
			pomocni=pomocni->next;
			count++;
		}
	}
	return rezultat;
}

Node* returnRecursively(Node* head, int position){
	Node* result=new Node();
	int count = 0;
	if(position==0){
		return head;
	} else {
		return returnRecursively(head->next,position-1);
	}
}

int findMiddle(Node* head){
	int duzina = 0;
	Node* temp = head;
	while(temp!=NULL){
		temp=temp->next;
		duzina++;
	}
	int srednji;
	if(duzina%2==1){
		srednji=(duzina-1)/2;
	} else {
		srednji=(duzina-1)/2 + 1;
	}
	temp=head;
	int count = 0;
	int result=0;
	while(temp!=NULL){
		if(count == srednji){
			result = temp->number;
		}
		temp=temp->next;
		count++;
	}
	return result;
}

int main(){
	Node* head=NULL;
	Node* second=NULL;
	Node* last=NULL;

	append(&head, 10);
	append(&head, 45);
	append(&head, 90);
	append(&head, 324);
	append(&head, 9834);
	cout << findMiddle(head) << endl;
	printList(head);
	//cout << returnRecursively(head, 2)->number << endl;
	//int array[2] = {0,1};
	//cout << array[0] << endl;
	//cout << 0[array] << endl;
	//deleteWholeList(&head);
	//printList(head);
	//cout << duzina(head) << endl;
	//cout << findElement(head,100) << endl;
	//int rezultat = returnNode(head,2);
	//cout << rezultat << endl;
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
