#pragma once
#include <queue>
#include <iostream>
#include <string>

// displayQueue code from https://www.youtube.com/watch?v=jaK4pn1jXTo
void displayQueue(std::queue<std::string> queue) {
	while (!queue.empty()) {
		std::cout << queue.front() << " ";
		queue.pop();
	}
	std::cout << "\n";
}
