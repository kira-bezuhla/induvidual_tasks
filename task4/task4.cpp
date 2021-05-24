#include<iostream>
#include<time.h>
#include<conio.h>
#include<iomanip>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	srand((unsigned)time(NULL));
	int n, m, i, j, k = 0;
	cout << "please input length of FIRST sequence: ";
	cin >> n;
	cout << "please input length of SECOND sequence: ";
	cin >> m;

	vector<int> seq1, seq2;
	vector<int> seq3;

	for (i = 0; i < n; i++)
	{
		seq1.push_back(rand() % 10);
	}
	for (i = 0; i < m; i++)
	{
		seq2.push_back(rand() % 10);
	}

	//cout << "\nFIRST sequence is:\n";
	//for (i = 0; i < n; i++)
	//{
	//	cout << seq1[i] << "   ";
	//}
	//cout << "\nSECOND sequence is:\n";
	//for (i = 0; i < m; i++)
	//{
	//	cout << seq2[i] << "   ";
	//}

	sort(seq1.begin(), seq1.end());
	sort(seq2.begin(), seq2.end());

	cout << "\nafter sorting:";
	cout << "\nFIRST sequence is:\n";
	for (i = 0; i < n; i++)
	{
		cout << seq1[i] << "   ";
	}
	cout << "\nSECOND sequence is:\n";
	for (i = 0; i < m; i++)
	{
		cout << seq2[i] << "   ";
	}
	
	i = 0; j = 0;
	while (i < n && j < m)
	{

		if (seq1[i] > seq2[j])
		{
			seq3.push_back(seq2[j]);
			j++; k++;
		}
		else
		{
			if ((seq1[i] < seq2[j]))
			{
				seq3.push_back(seq1[i]);
				i++; k++;
			}
			else
			{
				seq3.push_back(seq1[i]);
				seq3.push_back(seq2[j]);
				i++; j++; k++; k++;
			}
		}
	}

	for (k = i; k < n; k++)
	{
		seq3.push_back(seq1[k]);
	}
	for (k = j; k < m; k++)
	{
		seq3.push_back(seq2[k]);
	}


	cout << "\n\nTHIRD  sorted sequence:" << endl;
	for (i = 0; i < seq3.size(); i++)
	{
		cout << seq3[i] << "   ";
	}


	_getch();
	return 0;
}