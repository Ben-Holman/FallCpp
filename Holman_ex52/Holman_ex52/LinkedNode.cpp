#include "LinkedNode.h"
#include <iostream>
#include <cstddef>
void linkedList::insertFront(ListNode** head_ref, int new_data){ // https://www.geeksforgeeks.org/cpp-program-for-inserting-a-node-in-a-linked-list/
// 1. Allocate node
ListNode* new_node = new ListNode();

// 2. Put in the data
new_node->data = new_data;

// 3. Make next of new node
//    as head
new_node->next = (*head_ref);

// 4. Move the head to point to
//    the new node
(*head_ref) = new_node;
}

void linkedList::remove(ListNode* prev, ListNode* curr) { // Day 10.pdf 
	ListNode* tmp = curr; 
	prev->next = curr->next; 
	delete tmp; 
}
/*
void linkedList::findAndRemove(ListNode** head, int target) { // https://www.geeksforgeeks.org/linked-list-set-3-deleting-node/
	ListNode* temp;
	ListNode* prev;
	temp = *head;
	prev = *head;
	for (int i = 0; i < target; i++) {
		if (i == 0 && target == 1) {
			*head = (*head)->next;
			free(temp);
		}
		else {
			if (i == target - 1 && temp) {
				prev->next = temp->next;
				free(temp);
			}
			else {
				prev = temp;

				// Position was greater than
				// number of nodes in the list
				if (prev == NULL)
					break;
				temp = temp->next;
			}
		}
	}
}
*/
void linkedList::findAndRemove(ListNode*& head, int val) //https://www.geeksforgeeks.org/linked-list-set-3-deleting-node/
{

	// Check if list is empty or we
	// reach at the end of the
	// list.
	if (head == NULL) {
		std::cout << "Element not present in the list\n";
		return;
	}

	// If current node is the
	// node to be deleted
	if (head->data == val) {
		ListNode* t = head;

		// If it's start of the node head
		// node points to second node
		head = head->next;

		// Else changes previous node's
		// link to current node's link
		delete (t);
		return;
	}
	findAndRemove(head->next, val);
}

void linkedList::traverse() {
	ListNode* curr = head; // come back to 
	while (curr != nullptr) {
		std::cout << curr->data << std::endl;
		curr = curr->next;
	}
}

ListNode* linkedList::find(int target) {
	ListNode* curr = head;
	while (curr != NULL) {
		if (curr->data == target) {
			return curr; 
		}
		else {
			curr = curr->next; 
		}
	}
	return NULL; 
}

bool linkedList::findAndReplace(ListNode* temp, int target) { // https://stackoverflow.com/questions/40208969/how-to-replace-data-in-a-certain-node-in-a-linked-list
	//ListNode* tmp = head;
	//ListNode* new_node = new ListNode();
	ListNode* temp1 = temp;
	temp1 = head;
	if (temp1 == NULL) {
		std::cout << "Empty List";
	}
	else {
		while (temp1 != NULL) {
			if (temp1->data == target) {
				temp1->next = temp1;
				temp1->next = temp1->next->next;
				free(temp1->next);
			}
			//temp = temp->next;
		}
	}

	return false;
}

void linkedList::findAndInsert(ListNode* prev, int target) { //https://www.geeksforgeeks.org/cpp-program-for-inserting-a-node-in-a-linked-list/	-- DIDN'T USE
	// https://www.youtube.com/watch?v=RNMIDj62o_o

	if (prev == NULL) {
		std::cout << "Previous cannot be NULL";
		return;
	}

	ListNode* newNode = new ListNode();

	newNode->data = target;
	newNode->next = prev->next;
	prev->next = newNode;

}
/*
															 // 1. Allocate node
	ListNode* new_node = new ListNode();

	// Used in step 5
	ListNode* last = *head;

	// 2. Put in the data
	new_node->data = target;
	*/
	/* 3. This new node is going to be
		  the last node, so make next of
		  it as NULL 
	new_node->next = NULL;
	
	/* 4. If the Linked List is empty,
	then make the new node as head 
	if (*head == NULL)
	{
		*head = new_node;
		return;
	}

	// 5. Else traverse till the
	//    last node
	while (last->next != NULL)
		last = last->next;

	// 6. Change the next of last node
	last->next = new_node;
	return;
	

*/

/*
ListNode* linkedList::getNode(int data){ // https://www.geeksforgeeks.org/cpp-program-for-inserting-node-in-the-middle-of-the-linked-list/
	// allocating space
	ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));

	// inserting the required data
	newNode->data = data;
	newNode->next = NULL;
	return newNode;
}

void linkedList::insertAtMid(ListNode** head_ref, int x)
{
	// if list is empty
	if (*head_ref == NULL)
		*head_ref = getNode(x);
	else {

		// get a new node
		ListNode* newNode = getNode(x);

		ListNode* ptr = *head_ref;
		int len = 0;

		// calculate length of the linked list
		//, i.e, the number of nodes
		while (ptr != NULL) {
			len++;
			ptr = ptr->next;
		}

		// 'count' the number of nodes after which
		//  the new node is to be inserted
		int count = ((len % 2) == 0) ? (len / 2) :
			(len + 1) / 2;
		ptr = *head_ref;

		// 'ptr' points to the node after which
		// the new node is to be inserted
		while (count-- > 1)
			ptr = ptr->next;

		// insert the 'newNode' and adjust the
		// required links
		newNode->next = ptr->next;
		ptr->next = newNode;
	}
}
*/
void linkedList::printList(ListNode* head) {
	while (head != NULL) {
		std::cout << " - " << head->data; 
		head = head->next; 
	}
}