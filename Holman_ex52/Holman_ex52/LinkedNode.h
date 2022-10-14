#pragma once
#include <cstddef>


class ListNode {
public:
	int data;
	ListNode* next;
	//ListNode* getNode(int data);
};

class linkedList:public ListNode {
private:
	ListNode* head;
public:
	//ListNode* head;
	linkedList() {
		head = NULL;
	}
	void insertFront(ListNode** head_ref, int new_data);
	void remove(ListNode* prev, ListNode* curr);
	void traverse();
	ListNode* find(int target);
	//ListNode* getNode(int data);
	bool findAndReplace(ListNode* temp, int target);
	void findAndInsert(ListNode* prev, int target);
	void findAndRemove(ListNode*& head, int val);
	//void findandRemove(ListNode* prev, ListNode* curr);
	void printList(ListNode* head);
	//void insertAtMid(ListNode** head_ref, int x);
};

