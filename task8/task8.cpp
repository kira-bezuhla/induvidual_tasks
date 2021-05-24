#include<iostream>
#include<time.h>
#include<conio.h>
#include<iomanip>
#include<vector>

#define STOP '*'
struct Point
{
	char name;
	double x;
	double y;
};

using namespace std;

void ioPoint(Point&);
double Distance(Point, Point);
int main()
{
	srand((unsigned)time(NULL));
	Point p;
	

	int i, j;
	char k;
	cout << "please input name of the point or * to finish: ";
	cin >> k;
	vector<Point> dotes;
	while (k != STOP)
	{	
		p.name = k;
		ioPoint(p);
		dotes.push_back(p);
		
		
		cout << "please input name of the point or * to finish: ";
		cin >> k;
	}

	cout << endl << endl << "List of dotes" << endl;
	for (i = 0; i < dotes.size(); i++)
	{
		cout << dotes[i].name << ":   (" << dotes[i].x << ",  " << dotes[i].y << ")\n";
	}

	cout << "\n==============================\n\n";
	
	int n = dotes.size();

	double** matrix = new double* [n];
	for (int i = 0; i < n; i++)
	{
		matrix[i] = new double[n];
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			matrix[i][j] = Distance(dotes[i], dotes[j]);
			cout << matrix[i][j] << setw(10);
		}
		cout << endl;
	}
	cout << "\n==============================\n\n";
	for (int i = 0; i < n; i++)
	{
		delete[] matrix[i];
	}
	delete[] matrix;


	_getch();
	return 0;
}
void ioPoint(Point& A)
{

	A.x = rand() % 11 - 5.0;
	A.y = rand() % 11 - 5.0;
	cout << "x" << "    " << "y" << endl;;
	cout << A.x << "    " << A.y << endl;;

}

double Distance(Point A, Point B)
{
	double d;
	d = sqrt(((A.x - B.x) * (A.x - B.x)) + ((A.y - B.y) * (A.y - B.y)));
	return d;
}
