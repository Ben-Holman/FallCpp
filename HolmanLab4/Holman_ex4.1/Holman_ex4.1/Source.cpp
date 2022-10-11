#include <iostream>
typedef int* intArrayPtr; 

int main() {
	int d1, d2; 
	std::cout << "Enter the rows and column dimesions of the array: \n"; 
	std::cin >> d1 >> d2; 

	intArrayPtr* m = new intArrayPtr[d1];
	int i, j; 
	for (i = 0; i < d1; i++) {
		m[i] = new int[d2]; 
		// m1 is now a d1 by d2 array. 
	}
	std::cout << "Enter " << d1 << " rows of " << d2 << " integers each: \n"; 
	for (i = 0; i < d1; i++) {
		for (j = 0; j < d2; j++) {
			std::cin >> m[i][j]; 
		}
	}

	std::cout << "Showing the 2-dimensional array:\n"; 
	for (i = 0; i < d1; i++) {
		for (j = 0; j < d2; j++) {
			std::cout << m[i][j] << " ";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
	std::cout << std::endl; 
	int d3, d4;
	std::cout << "Enter the rows and column dimesions of the array: \n";
	std::cin >> d3 >> d4;

	intArrayPtr* n = new intArrayPtr[d3];
	//int k, l;
	for (i = 0; i < d3; i++) {
		n[i] = new int[d4];
		// n is now a d3 by d4 array. 
	}
	std::cout << "Enter " << d3 << " rows of " << d4 << " integers each: \n";
	for (i = 0; i < d3; i++) {
		for (j = 0; j < d4; j++) {
			std::cin >> n[i][j];
		}
	}

	std::cout << "Showing the 2-dimensional array:\n";
	for (i = 0; i < d3; i++) {
		for (j = 0; j < d4; j++) {
			std::cout << n[i][j] << " ";
		}
		std::cout << std::endl;
	}

	if (d2 == d3) {
		for (i = 0; i < d2; i++) {
			for (j = 0; j < d3; j++) {
				m[i][j] = n[i][j] * m[i][j];
				std::cout << m[i][j] << " ";
			}
			std::cout << std::endl;
		}
	}
	else {
		std::cout << "rows and columns do not match. \n"; 
		exit(1); 
	}
}

// I can't believe it works. 
	