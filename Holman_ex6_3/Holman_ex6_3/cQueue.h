#pragma once
#include <cstddef>

class Node {

public: 
	Node() {
		data = 0; 
		next = NULL;
	}

	Node(int data) {
		this->data = data; 
		this->next = NULL; 
	}
	int data;
	Node* next;
};

class cQueue:public Node
{
public: 
	Node* rear;
	Node* head;
	int size; 
	cQueue();
	cQueue(Node* rear);
	void enqueue(int data);
	int dequeue();
	void printQueue(); 
	bool isEmpty(); 
private:

};

