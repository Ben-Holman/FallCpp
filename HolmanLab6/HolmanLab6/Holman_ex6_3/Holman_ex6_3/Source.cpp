#include <iostream>
#include <windows.h>
#include <cstdlib>
#include "cQueue.h"

int main() {


	trafficQ q;
	q.enque('R');
	q.enque('Y');
	q.enque('G');
	q.display();
	return 0;
}