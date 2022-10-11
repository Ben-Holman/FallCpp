#include <iostream>
#include <cmath>
#include <vector>
#include "Matrix.h"

using namespace std;
int main() {
	vector<vector<int>> s; 
	vector<int> a; 

	a.push_back(2);
	a.push_back(4); 
	a.push_back(1); 

	s.push_back(a); 

	vector<int> b; 

	b.push_back(6); 
	b.push_back(43);
	b.push_back(21); 

	s.push_back(b); 

	vector<vector<int>> s1; 

	vector<int> a1; 

	a1.push_back(12); 
	a1.push_back(43);

	s1.push_back(a1);

	vector<int> b1; 

	b1.push_back(9);
	b1.push_back(4); 

	s1.push_back(b1); 

	vector<int> c1; 

	c1.push_back(93); 
	c1.push_back(15); 

	s1.push_back(c1); 

	Matrix<int> A(s); 
	Matrix<int> B(s1); 
	
	cout << "Matrix A:\n"; 
	A.print(); 
	cout << endl; 
	cout << "Matrix B: \n"; 
	B.print(); 
	cout << endl; 
	cout << "Matrix Addition:\n"; 
	Matrix<int> D = A.add(B); 
	cout << endl; 

	cout << "Matrix Multiplication:\n"; 

	Matrix<int> C = A.multiply(B); 

	C.print(); 

	cout << "Overlap: \n";

	D = A.overlap(B); 

	D.print(); 



	return 0;
}