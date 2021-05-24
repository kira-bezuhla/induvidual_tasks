
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	int count = 0;
	cout << "Enter a string = > \n";
	getline(cin, s);
	s = " " + s;
	int len = s.length();
	for (int i = 0; i < len - 1; i++)
	{
		if (s[i] == ' ' && s[i + 1] != ' ')
			count++;
	}
	cout << "\n String has " << count << "	words\n";
	return 0;
}