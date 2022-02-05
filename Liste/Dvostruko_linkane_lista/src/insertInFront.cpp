#include "../include/nodesForDoubleList.hpp"

void insertInFront(Node** head, int number){
	Node* new_node = new Node();

	new_node->data=number;
	new_node->next=(*head);
	new_node->previous=NULL;

	(*head)=new_node;
}
