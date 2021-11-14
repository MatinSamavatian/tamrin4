#include <iostream>
#include<conio.h>
#include<math.h>

using namespace std;



double bmm(int, int);

double kmm(int , int );

int main()
{
	int a, b;
	cout << "please enter your numbers:";

	cin >> a >> b;

	cout << "kmm of these two is:" << kmm(a, b);


	system("pause>0");
}


double bmm(int  x, int  y)
{
	if (y == 0)
		return x;
	return bmm(y, x % y);
}


double kmm(int x, int y)
{
	return (x / bmm(x, y)) * y;
}
