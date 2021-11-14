#include <iostream>
#include<conio.h>
#include<math.h>

using namespace std;


int main() 
{
	int num, s = 1;
	cout << "enter your number: ";
	cin >> num;
	for (int i = 1; s < num; ++i)
		s = s+s * i;
	if (s == num)
		cout << "YES!";
	else
		cout << "NO!";
	
	
	
	system("pause>0");
}