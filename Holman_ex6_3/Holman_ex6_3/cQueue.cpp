#include "cQueue.h"
#include <cstddef>
#include <iostream>

// almost code for this taken from https://prepinsta.com/cpp-program/circular-queue-using-linked-list/
 
cQueue::cQueue()
{
	head = NULL; 
	rear = NULL; 
	size = 0;
}
/*
cQueue::cQueue(Node* rear) // may not even need this.
{
	this->rear = rear; 
	if (this->rear != NULL) {
		this->rear->next = this->next;
	}
}
*/
void cQueue::enqueue(int data)
{
	std::cout << "Entering " << data << " into the Queue...\n"; 
	size++;
	Node* n = new Node(data); 
	if (head == NULL) {
		head = n;
	}
	else {
		rear->next = n;
		rear = n; 
		rear->next = head;
	}
	//rear = n;
}

int cQueue::dequeue()
{
	if (head == NULL) {
		std::cout << "Queue is empty";
		return 1; 
	}
	size--; 
	int temp;
	if (head == rear) {
		temp = head->data;
		delete head;
		head = rear = NULL;
		std::cout << "Popping value " << temp << " from Queue\n";
		return temp;
	}
	Node* temp1 = head;
	temp = temp1->data;
	head = head->next;
	rear->next = head;
	delete temp1;
	std::cout << "Popping value " << temp << " from Queue\n"; 
	return temp;
}

void cQueue::printQueue()
{
	if (size == 0) {
		std::cout << "Queue is Empty...\n"; 
	}
	std::cout << "The Queue Shows:\n"; 
	Node* temp = head;
	while (temp->next != head) {
		std::cout << " " << temp->data; 
		temp = temp->next; 
	}
	std::cout << " " << temp->data;
	std::cout << "\n";

}

bool cQueue::isEmpty()
{

	return rear == NULL;
}
