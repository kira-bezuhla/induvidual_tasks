#include <iostream>
#include <string>
using namespace std;
int Recurs(int, int);
int main()
{
	int n, sum = 0;
	cout << "please input natural number: ";
	cin >> n;
	cout << endl;
	cout<< Recurs(n, sum);
	cout << endl;
	system("pause");
	return 0;
}
int Recurs(int n, int sum)
{
	if (n != 0) 
	{
		sum += n % 10;
		n /= 10;
		Recurs(n, sum);
	}
	else 
	{
		return sum;
	}
}