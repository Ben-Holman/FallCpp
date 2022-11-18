// code from https://www.chegg.com/homework-help/questions-and-answers/c-write-circular-queue-class-may-use-linked-list-version-dynamic-array-vector-implementati-q27292014
// I added the Sleep() function
# include<iostream>
using namespace std;
class trafficQ
{
	char* a;
	int delay1, delay2;//Delay1 is duration of blinking for RED and Green,Delay2 is for YELLOW
	int r, f, size;
public:
	trafficQ();
	void enque(char);//ADDS the colors RED,YELLOW and GREEN to circular queue
	void display();
};
trafficQ::trafficQ()
{
	size = 3;
	delay2 = 3;
	cout << "\nEnter the duration for blinking of RED AND GREEN light:";
	cin >> delay1;
	a = new char[size];

	r = -1;
	f = -1;
}
void trafficQ::enque(char x)
{
	if ((r + 1) % size == f)
		cout << "\nCircular Q overflow";
	else
	{
		if (r == size - 1)
			r = 0;
		else
		{
			r = r + 1;
			a[r] = x;
			if (f == -1)
				f++;
		}
	}
}
void trafficQ::display()
{
	int i, j;
	for (i = f; i <= r; i++)
	{
		cout << "\n";
		if (i == 1)
		{
			for (j = 0; j < delay2; j++)
				Sleep(delay2 * 100);
			cout << a[i];
		}
		else
		{
			for (j = 0; j < delay1; j++)
				Sleep(delay1 * 100);
			cout << a[i];

		}
	}

}