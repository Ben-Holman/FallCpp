#include "LinkedNode.h"
#include <iostream>
void linkedList::insertFront(ListNode** head_ref, int new_data) { // https://www.geeksforgeeks.org/cpp-program-for-inserting-a-node-in-a-linked-list/
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

void linkedList::traverse() {
    ListNode* curr = head; // come back to
    while (curr != nullptr) {
        std::cout << curr->data << std::endl;
        curr = curr->next;
    }
}

ListNode* linkedList::find(int target) {
    ListNode* curr = head;
    while (curr != nullptr) {
        if (curr->data == target) {
            return curr;
        }
        else {
            curr = curr->next;
        }
    }
    return NULL;
}


ListNode* getNode(int data) { //
        // allocating space
    ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));

    // inserting the required data
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}



void linkedList::printList(ListNode* head) {
    while (head != NULL) {
        std::cout << " - " << head->data;
        head = head->next;
    }
}
