#pragma once
#include <iostream>  
#include <vector>
using namespace std;
/*
class Matrix
{
public:
	Matrix();
	~Matrix();
	double getSize(); 
	double getValue(int position);
	double setValue(int position, int value);
	void add(Matrix* m1, Matrix* m2); 
	double subtract(); 
	double multiply(); 
	double overlap(); 
private:
	int row; 
	int col; 
	int* m[];
	int* n[];
};
*/

//Here I am giving you the C++ Code like you wanted and screenshot of Output.If you have any problem understanding any part you can ask in comments.C++ Code - #include <iostream>  #include <bits/stdc++.h>  using namespace std;  

//Creating class Matrix  
template <typename T>  class Matrix {
	//private data members of class  
private:
	vector<vector<T>> mat;
	int x_size;
	int y_size;
	//Public Methods  
public:
	//Constructor  
	template <typename T2> Matrix(vector<vector<T2>> vec) {
		x_size = vec[0].size();
		y_size = vec.size();
		for (int i = 0; i < y_size; i++) {
			vector<T2> var;
			for (int j = 0; j < x_size; j++) {
				var.push_back(vec[i][j]);
			}  mat.push_back(var);
		}
	}
	//Destructor 
	~Matrix() {  //
		cout << "Destructor Called for Matrix class" << endl;
	}

	int getSize() {
		return x_size * y_size;
	}

	int getXsize() {
		return x_size;
	}

	int getYsize() {
		return y_size;
	}

	void setValue(int x, int y, T val) {
		mat[x][y] = val;
	}

	T getValue(int x, int y) {
		return mat[x][y];
	}
	Matrix add(Matrix b) {
		if (x_size != b.getXsize() || y_size != b.getYsize()) {
			std::cout << "Invalid Matrix size for addition.\n";
			return b;
		}
		for (int i = 0; i < y_size; i++) {
			for (int j = 0; j < x_size; j++) {
				b.setValue(i, j, b.getValue(i, j) + mat[i][j]);
			}
		}
		return b;
	}

	Matrix subtract(Matrix b) {
		for (int i = 0; i < y_size; i++) {
			for (int j = 0; j < x_size; j++) {
				b.setValue(i, j, -1 * b.getValue(i, j) + mat[i][j]);
			}
		}
		return b;
	}

	Matrix multiply(Matrix b) {
		if (x_size != b.getYsize()) {
			vector<vector<T>> a;
			std::cout << "Invalid Multiplication\n";
			Matrix s(a);

			return s;
		}
		vector<vector<T>> vec;
		for (int i = 0; i < y_size; i++) {
			vector<T> ss;
			for (int j = 0; j < b.getXsize(); j++) {
				for (int k = 0; k < x_size; k++) {
					if (ss.size() == j) {
						ss.push_back(mat[i][k] * b.getValue(i, j));
					}
					else {
						ss[j] == ss[j] + mat[i][k] * b.getValue(k, j);
					}
				}
			}
			vec.push_back(ss);
		}
		Matrix ma(vec);
		return ma;
	}

	Matrix overlap(Matrix b) {
		vector<vector<T>> vecna; 
		for (int i = 0; i < max(y_size, b.getYsize()); i++) {
			vector<T> vec; 
			for (int j = 0; j < max(x_size, b.getXsize()); j++) {
				if ((i < y_size && j < x_size) && (i < b.getYsize() && j < b.getXsize())) {
					vec.push_back(max(mat[i][j], b.getValue(i, j))); 
				}
				else if (i<y_size && j < x_size) {
					vec.push_back(mat[i][j]);
				}
				else if (i < b.getYsize() && j < b.getXsize()) {
					vec.push_back(b.getValue(i, j));
				}
			}
			vecna.push_back(vec); 
		}
		Matrix m(vecna);
		return m; 
	}

	void print() {
		std::cout << "Displaying Matrix:\n"; 
		for (int i = 0; i < y_size; i++) {
			for (int j = 0; j < x_size; j++) {
				std::cout << mat[i][j] << " "; 
			}
			std::cout << std::endl; 
		}
	}


};