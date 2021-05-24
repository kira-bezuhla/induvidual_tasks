#include<iostream>
#include<time.h>
#include<conio.h>
#include<iomanip>
#include<vector>
using namespace std;

void inputVector(vector<int>&, int n);
void outputVector(vector<int> ivec);

int main()
{
	int n = 10;
	vector<int> ivec;
	inputVector(ivec, n);
	outputVector(ivec);
	/*srand((unsigned)time(NULL));
	int m;

	for (int i = 0; i < n; i++)
	{
		m = rand() % 21 - 10;
		ivec.push_back(m);
	}
	for (int i = 0; i < n; i++)
	{
		cout << ivec[i] << " ";
		cout << endl;
	}*/


	//знаходження мінімального елементу
	int min = 0;
	for (int i = 0; i < n; i++)
	{
		if (min > ivec[i]) 
		{ 
			min = ivec[i]; 
		}
	}
	cout << "min is: " << min << endl;
	
	//видалення мінімальних елементів
	for (int i = 0; i < ivec.size(); i++)
	{
		if (ivec[i] == min) 
		{ 
			ivec.erase(ivec.begin()+i); 
		}
	}

	outputVector(ivec);


	_getch();
	return 0;
}

void inputVector(vector<int>& ivec, int n)
{
	srand((unsigned)time(NULL));
	int m;
	
	for (int i = 0; i < n; i++)
	{
		m = rand() % 21 - 10;
		ivec.push_back(m);
	}
}
void outputVector(vector<int> ivec)
{
	int n = ivec.size();
	for (int i = 0; i < n; i++)
	{
		cout << ivec[i] << " ";
		cout << endl;
	}

}