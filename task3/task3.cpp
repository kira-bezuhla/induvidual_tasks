
#include <iostream>
//#include <string>
using namespace std;
int main()
{
	//string s;
	int mas[100] = { 2,3,4,2,3,2,4,0,0,0,
		0,0,2,3,4,2,0,0,2,3,
		4,0,2, 0,0,3,2,4,3,4,
		0,2,3,0,4,2,3,2,3,4,
		3,2,2,4,4,0,7,0,0,5,
		0,0,0,0,0,0,0,0,0,0,
		0,6,5,4,5,6,4 };
	int count = 0, k = 0;
	int max = -1;
	//cout << "Input string = > \n";
	//getline(cin, s);
	//s = " " + s;
	int len = 67;
	cout << "Array is:" << endl;
	for (int i = 0; i < len; i++)
	{
		cout << mas[i] << endl;
	}
	cout << "\n========\n";
	for (int i = 0; i < len - 1; i++)
	{
		if (mas[i] == 0 && mas[i + 1] != 0)
		{
			k = 0;
			count++;
		}
		else {
			k++;
			if (mas[i] != 0 && mas[i + 1] == 0) 
			{
				if (max < k)
				{
					max = k;
				}
			}
		}
	}
		cout << "\n Array has " << count <<
			" consecutive numbers \n";
		cout << "\n Max length of 0 has " << max <<
			" characters\n";
		system("pause");
		return 0;
	}