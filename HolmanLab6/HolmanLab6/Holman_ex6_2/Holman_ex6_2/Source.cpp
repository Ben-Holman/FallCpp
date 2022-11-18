#include <queue>
#include <string>
#include <iostream>
#include "extraFunc.h"

int main() {
	std::queue<std::string> studentQueue;
	std::string input;
	int menuOption = 0;
	int elementOption = 0;
	std::cout << "Welcome To Student Services Queue!\n";
	std::cout << "Please Choose An Option From The Menu Below!\n";
	std::cout << "\n";
	while (true) {
		std::cout << "MENU:\n";
		std::cout << "Option 1: Add Element To Queue\n";
		std::cout << "Option 2: Remove Element From Queue\n";
		std::cout << "Option 3: Display Queue\n";
		std::cin >> menuOption;
		switch (menuOption) {
		case 1:
			std::cout << "Add Element to Queue:\n";
			std::cout << "What Type of Element?\n";
			std::cout << "\n";
			std::cout << "Option 1: Student Name\n";
			std::cout << "Option 2: Student ID\n";
			std::cout << "Option 3: Student Major\n";
			std::cin >> elementOption;
			switch (elementOption) {
			case 1:
				std::cout << "Student Name:\n";
				std::cin >> input;
				studentQueue.push(input);
				break;
			case 2:
				std::cout << "Student ID:\n";
				std::cin >> input;
				studentQueue.push(input);
				break;
			case 3:
				std::cout << "Student Major:\n";
				std::cin >> input;
				studentQueue.push(input);
				break;
			}
			break;
		case 2:
			std::cout << "Remove Element:\n";
			studentQueue.pop();
			break;
		case 3:
			std::cout << "Displaying Queue:\n";
			displayQueue(studentQueue);
			std::cout << "\n";
			break;
		}
	}
	return 0;
}