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
	int matrix1[n][n], matrix2[n][n];
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			matrix1[i][j] = rand() % 2;
			cout << matrix1[i][j] << "  ";
		}
		cout << endl;
	}
	cout << "\n=====================\n\n";

	for (j = 0; j < n; j++)
	{
		for (i = 0; i < n; i++)
		{
			matrix2[j][i] = matrix1[i][j];
			cout << matrix2[j][i] << "  ";
		}
		cout << endl;
	}


	_getch();
	return 0;
}