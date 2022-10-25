#include <iostream>
#include "cQueue.h"
#include <string>

int main() {
	cQueue q;
	q.enqueue(3); q.enqueue(5); q.enqueue(2);
	q.enqueue(5); q.enqueue(6);
	q.printQueue();
	q.enqueue(7); q.dequeue(); q.dequeue();
	q.printQueue();
	return 0;
}