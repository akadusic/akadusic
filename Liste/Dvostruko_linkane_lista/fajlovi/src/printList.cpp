#include "../include/nodesForDoubleList.hpp"
#include <iostream>

void printList(Node* head){
	Node* temporary=head;
	while(temporary!=NULL){
		std::cout << temporary->data << " ";
		temporary=temporary->next;
	}
}
