#pragma once


class ListNode {
public:
	int data;
	ListNode* next;
	ListNode() {
		data = 0; 
		next = nullptr; 
	}
	
	ListNode(int data) {
		this->data = data;
		this->next = next; 
	}
	ListNode* getNode(int data);
};

class linkedList:public ListNode {
private:
	ListNode* head;
public:
	//ListNode* head;
	linkedList() {
		head = nullptr;
	}
	void insertFront(ListNode** head_ref, int new_data);
	void remove(ListNode* prev, ListNode* curr);
	void traverse();
	ListNode* find(int target);
	ListNode* getNode(int data);
	ListNode* findAndReplace(int target, int replacement); 
	void findAndInsert(ListNode** head, int target);
	void findAndRemove(ListNode** head, int target);
	void printList(ListNode* head);
	void insertAtMid(ListNode** head_ref, int x);
};

