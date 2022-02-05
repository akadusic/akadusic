struct Node{
	int number;
	Node* next;
};

void printList(Node* first);

void ubaciNaprijed(Node** firstElement, int data);

void ubaci(Node* previos_node, int data);

void ubaciNazad(Node* last, int data);

void append(Node** head, int data);

void deleteNode(Node** head, int value);

void deleteOnPosition(Node** head, int position);

void deleteWholeList(Node** head);

int returnNode(Node* head, int position);
