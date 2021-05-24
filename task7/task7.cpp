#include<iostream>
#include<time.h>
#include<conio.h>
#include<iomanip>
#include<vector>
using namespace std;

int main()
{
	srand((unsigned)time(NULL));
	const int n = 5;
	double matrix[n][n];
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			matrix[i][j] = rand() % 8 * 0.250;
			cout << matrix[i][j] << "     ";
		}
		cout << endl;
	}
	cout << "\n==============================\n\n";
	double tmp;
	//remaking
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i == n - 1 )
			{
				tmp = matrix[i][j];
				matrix[i][j] = matrix[j][i];
				matrix[j][i] = tmp;
			}
		}
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			
			cout << matrix[i][j] << "     ";
		}
		cout << endl;
	}

	_getch();
	return 0;
}