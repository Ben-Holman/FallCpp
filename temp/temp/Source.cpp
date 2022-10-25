#include <iostream>
#include "Header.h"

int main() {
	Queue q;
	q.enqueue(3); q.enqueue(5); q.enqueue(2);
	q.enqueue(5); q.enqueue(6);
	q.Show();
	q.enqueue(7); q.dequeue(); q.dequeue();
	q.Show();

}