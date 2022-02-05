#include "../includes/jednostruka.hpp"
#include <cstdlib>

int returnNode(Node* head, int position){
	Node* pomocni = head;
	int count = 0;
	int rezultat=0;
	while(pomocni!=NULL){
		if(count==position){
			rezultat=pomocni->number;
		} else{
			pomocni=pomocni->next;
			count++;
		}
	}
	return rezultat;
}
