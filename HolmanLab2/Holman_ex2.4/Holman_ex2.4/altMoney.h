#include<iostream>
#include<cstdlib>
//using namespace std;
class AltMoney
{
public:
	AltMoney();
	AltMoney(int d, int c);
	void add(AltMoney m1, AltMoney m2);
	friend void subtract(AltMoney m1, AltMoney m2, AltMoney& difference);
	void display_money();
	void read_money(int& d, int& c);
private:
	int dollars;
	int cents;
};