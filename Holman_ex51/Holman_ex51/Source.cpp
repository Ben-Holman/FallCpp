#include <iostream>
#include "LinkedNode.h"

int main() {
	int input; 
	char answer = 0; 
	linkedList* node;
	ListNode* node1;
	while (answer != 'y' && answer != 'Y') {
		std::cout << "Insert a value into the Linked List:\n"; 
		std::cin >> input; 
		node->insertFront(&node1, input);
		std::cout << "Value inputted into the Linked List. Would you like to Insert another value?\n";
		std::cin >> answer; 
	}
	node->printList(node1);

	return 0; 
}