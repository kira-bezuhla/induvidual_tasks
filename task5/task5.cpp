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
	int matrix[n][n]; /*= {
		{1,0,0,1,1},
		{0,1,1,1,0},
		{0,1,0,0,1},
		{1,1,0,1,1},
		{1,0,1,1,1} 
	};*/
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			matrix[i][j] = rand() % 2;
			cout << matrix[i][j] << "  ";
		}
		cout << endl;
	}
	//порівняння
	bool prap = true;
	for (i = 0; i < n && prap; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (matrix[i][j] != matrix[j][i])
			{
				prap = false;
				
				cout << "no symmetry :(" << endl;
				break;
			}
			
		}
	}
	if (prap)
	{
		cout << "this matrix is symmetrical about the main diagonal" << endl;
	}

	_getch();
	return 0;
}