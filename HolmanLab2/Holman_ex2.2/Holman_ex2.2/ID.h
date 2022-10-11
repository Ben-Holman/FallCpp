// File ID.h
#ifndef ID_H
#define ID_H
#include <iostream>
namespace idclass1
{
	class ID
	{
	public:
		ID();
		ID(int, int, int);
		void display();
	private:
		int left;
		int middle;
		int right;
	};
} // end of idclass1 namespace

namespace idclass2
{
	class ID
	{
	public:
		ID();
		ID(int, int, int);
		void display();
	private:
		int left;
		int middle;
		int right;
	};
} // end of idclass2 namespace
#endif