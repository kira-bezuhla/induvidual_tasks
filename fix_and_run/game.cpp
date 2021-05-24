#include<iostream>
#include<time.h>
#include<conio.h>
#include<iomanip>
#include<vector>
#include<Windows.h>
using namespace std;
bool CheckSameSymbols(char[], int, int, vector<int>);
bool CheckLength(char[], int);
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	//cout << " а б в г д е ё ж з и й к л м н о п р с т у ф х ц ч ш щ ь ы ъ э ю я " << endl
	//	<< " А Б В Г Д Е Ё Ж З И Й К Л М Н О П Р С Т У Ф Х Ц Ч Ш Щ Ь Ы Ъ Э Ю Я" << endl;

	int k, n;
	cout << "какое количество букв в слове?  ";
	cin >> k;
	n = k + 1;
	char* main = new char[n];
	char* word = new char[n];
	int fix = 0, run = 0, count = 0;

	cout << "ведущий, введите слово: ";
	cin >> main;
	if (CheckLength(main, k))
		//	cout << main;
	{
		cout << "игрок, вводите слова." << endl <<
			"программа выведет количество fix и run" <<
			endl << "введите правильное слово для победы" <<
			endl;
		
		
		vector<int> fixIter;
		while (word != main)
		{
			if (word != main)
			{
				cout << "слово: ";
				cin >> word;
				if (CheckLength(word, k))
				{
					for (int i = 0; i < k; i++)
					{
						if (main[i] == word[i])
						{
							fix++;
							fixIter.push_back(i);
						}
					}
					for (int i = 0; i < k; i++)
					{
						for (int j = 0; j < k; j++)
						{
							if (main[i] == word[j] && i != j)
							{
								if (CheckSameSymbols(word, j, k, fixIter))
								{

									run++;

								}
							}
						}
					}
					cout << fix << " fix, " << run << " run" << endl;
				}

			}
			else
			{
				
				break;
			}

			fixIter.clear();
			fix = 0; run = 0;
			count++;
		}

	}
	cout << "поздравляю, это правильное слово): " << main << endl
		<< "вам понадобилось " << count << "слов, чтобы отгадать" << endl;
	delete[] main;
	delete[] word;
	_getch();
	return 0;
}

bool CheckSameSymbols(char word[], int j, int k, vector<int> fix)
{
	int i = 0;
	if (!fix.empty()) {
		while (fix[i] != fix.size())
		{
			if (word[j] != word[fix[i]])
			{
				return true;
			}
			else
			{
				return false;
			}
			i++;
		}
	}
	else
	{
		return true;
	}
}
bool CheckLength(char word[], int k)
{
	int i = 0;
	while (word[i] != 0)
	{
		i++;
	}
	if (i != k)
	{
		cout << "неправильно введено слово" << endl;
		return false;

	}
	else
	{
		return true;
	}
}