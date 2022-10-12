#pragma once
class ListNode {
public:
	int data;
	ListNode* next;
};
class linkedList {
private:
	ListNode* head;
public:
	linkedList() { 
		head = nullptr; 
	}
	void insertFront(ListNode** head_ref, int new_data);
	void remove(ListNode* prev, ListNode* curr);
	void traverse();
	void printList(ListNode* head);
	ListNode* find(int target);

};

