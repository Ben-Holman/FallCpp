#include <iostream>
#include "LinkedNode.h"

// Ben Holman 
// First Edit: 10/7/2022
// Last Edit:  10/12/2022

// if you input a character for an integer you will get an infinite loop.

int main() {
	int input; 
	linkedList* node = NULL;
	ListNode* node1 = NULL;
	while (true) {
		char answer;
		std::cout << "Insert a value into the Linked List:\n"; 
		std::cin >> input; 
		node->insertFront(&node1, input);
		std::cout << "Value inputted into the Linked List. Would you like to Insert another value? (Y/N)\n";
		std::cin >> answer; 
		if (answer == 'N' || answer == 'n') {
			break;
		}
		else {
			continue;
		}

	}
	node->printList(node1);

	return 0; 
}
