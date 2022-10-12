#include <iostream>
#include "LinkedNode.h"

int main() {

	linkedList* node = NULL; 
	ListNode* node1;
	node->insertFront(&node1, 10); 
	node->insertFront(&node1, 5);
	node->insertFront(&node1, 6);
	std::cout << "printing Linked List:\n"; 
	node->printList(node1);
	node->insertAtMid(&node1, 7);
	node->printList(node1);
	//node->remove(node1, node1);
	/*
	node->findAndRemove(&node1, 5); 
	std::cout << "printing Linked List:\n";
	node->printList(node1);
	node->findAndInsert(&node1, 7); 
	node->findAndReplace(5, 9);
	std::cout << "printing Linked List:\n";
	node->printList(node1);
	*/
	return 0; 
}