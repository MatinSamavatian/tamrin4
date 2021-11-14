#include <iostream>
#include<conio.h>
#include<math.h>

using namespace std;


int main()
{
	int tool, arz;
	cout << "tool va arz ra vared konid:";
	cin >> tool >> arz;
	cout << "shekle shoma:"<<endl;
	for (int i = 0; i < tool; i++)
	{
		for (int j = 0; j < arz; j++)
		{
			if (j % 2 == 0)
				cout << "*";
			else
				cout << "#";
		}
		cout << endl;

	}
	system("pause>0");
}