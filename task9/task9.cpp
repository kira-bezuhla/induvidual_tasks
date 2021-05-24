#include <iostream>
#include <string>
using namespace std;
bool CheckIn1(int n);
bool CheckIn2(int n);
void Separation(int n, int* a, int* b, int* c, int* d);
int main()
{
	int n;
	cout << "this strange numbers:" << endl;
	for (n = 1000; n < 10000; n++)
	{
		if (CheckIn1(n))
		{
			if (CheckIn2(n))
			{
				cout << n << endl;
			}
		}
	}



	system("pause");
		return 0;
}
void Separation(int n, int* a, int* b, int* c, int* d)
{
	*d = n % 10;
	n /= 10;
	*c = n % 10;
	n /= 10;
	*b = n % 10;
	n /= 10;
	*a = n % 10;
	n /= 10;
	
}
bool CheckIn1(int n)
{
	
	int a = 0, b = 0, c = 0, d = 0;
	Separation(n, &a, &b, &c, &d);


	if (a != b && a != c && a != d && b != c && b != d)
	{

		return true;
	}
	else
	{
		return false;
	}
}

bool CheckIn2(int n)
{
	
	int a = 0, b = 0, c = 0, d = 0;
	Separation(n, &a, &b, &c, &d);

	if ((a * 10 + b) - (c * 10 + d) == a + b + c + d)
	{
		 
		return true;
	}
	else
	{
		return false;
	}
}