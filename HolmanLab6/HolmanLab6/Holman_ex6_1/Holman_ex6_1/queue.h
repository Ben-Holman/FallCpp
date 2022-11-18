#pragma once 
#include <cstddef>
#include <string>
#include <iostream>
// code guide from https://www.youtube.com/watch?v=TCmkquGrmDQ
struct Node {
	std::string data;
	Node* next;

	Node() {
		data = "aaaaaa";
		next = NULL;
	}
};

class Queue {
public:
	Node* front = NULL; // saw to set both front and rear to NULL from https://www.tutorialspoint.com/cplusplus-program-to-implement-queue-using-linked-list
	Node* rear = NULL; // this was also in the video, but it 'clicked' looking at this ^ guide 

	void push(std::string input) {
		Node* string = new Node;
		string->data = input;
		string->next = NULL;
		if (front == NULL) {
			front = string;
			rear = string;
		}
		else {
			rear->next = string;
			rear = string;
		}
	}

	void pop() {
		if (empty()) {
			std::cout << "Queue is Empty...\n";
		}
		else if (front == rear) {
			free(front);
			front = rear = NULL;
		}
		else {
			Node* out = front;
			front = front->next;
			free(out);
		}
	}

	bool empty() {
		if (front == NULL && rear == NULL) {
			return true;
		}
		else {
			return false;
		}
	}

	void Showfront() {
		if (empty()) {
			std::cout << "Queue is Empty...\n";
		}
		else {
			std::cout << front->data;
		}
	}

	void displayQueue() {
		if (empty()) {
			std::cout << "Queue is Empty...\n";
		}
		else {
			Node* string = front;
			while (string != NULL) {
				std::cout << string->data << " ";
				string = string->next;
			}
		}
	}
};
/*
void displayQueue(Queue queue) {
		while (!queue.empty()) {
			queue.front();
			std::cout << " ";
			queue.pop();
		}
		std::cout << "\n";
}
*/

