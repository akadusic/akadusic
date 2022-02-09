#include <cstdlib>

struct Node{
	Node* next;
	Node* previous;
	int data;
};

void printList(Node* head);

void insertInFront(Node** head, int data);
