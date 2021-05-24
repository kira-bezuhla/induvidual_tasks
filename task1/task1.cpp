#include<iostream>
#include<time.h>
#include<conio.h>
#include<iomanip>
#include<vector>
using namespace std;

int main()
{
	srand((unsigned)time(NULL));
	int m,n = 10;
	vector<int> ivec;
	for (int i = 0; i < n; i++)
	{
		m = rand() % 21 - 10;
		ivec.push_back(m);
	}

	for (int i = 0; i < n; i++)
	{
		if (ivec[i] != 0)
		{
			if (ivec[i] < 0)
			{
				cout << "first number < 0: " << ivec[i] << endl;
				break;
			}
			else
			{
				cout << "first number > 0: " << ivec[i] << endl;
				break;
			}
		}
		
	}

	for (int i = 0; i < n; i++)
	{
		cout << i + 1 << " - " << ivec[i] << endl;
	}

	_getch();
	return 0;
}