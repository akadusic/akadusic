#include <iostream>
#include "../includes/jednostruka.hpp"

using namespace std;

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
