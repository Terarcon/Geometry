#include<iostream>
using namespace std;

//#define SQUARE
//#define TRIANGLE1
//#define TRIANGLE2
//#define TRIANGLE3
//#define RHOMBUS
//#define PLUS_MINUS
void main()
{
	setlocale(LC_ALL, "");

#ifdef SQUARE
	int n;
	cout << "¬ведите размер фигуры: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "* ";
		}
		cout << "\n";
	}
#endif // SQUARE

#ifdef TRIANGLE1
	int n;
	cout << "¬ведите размер фигуры: "; cin >> n;n++;
	for (int i = 0; i < n; i++) 
	{
		/*
		for (int j = i; j < n; j++)
		{
			cout << "* ";
		}
		*/
		for (int j = 0; j < i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // TRIANGLE1

#ifdef TRIANGLE2
	int n;
	cout << "¬ведите размер фигуры: "; cin >> n;
	cout << "\n";
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // TRIANGLE2

#ifdef TRIANGLE3
	int n;
	cout << "¬ведите размер фигуры: "; cin >> n;
	cout << "\n";
	for (int i = 0; i < n; i++)
	{
		//for (int j = i; j < n; j++)
		{
			//cout << " ";
		}
		for (int j = 0; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // TRIANGLE3

#ifdef RHOMBUS
	int n;
	cout << "¬ведите размер фигуры: "; cin >> n;
	cout << "\n";
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << " ";
		}
		cout << "/";

		for (int j = 0; j < i; j++)
		{
			cout << "  ";
		}
		cout << "\\";
		cout << endl;
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << " ";
		}
		cout <<	"\\";

		for (int j = i; j < n - 1; j++)
		{
			cout << "  ";
		}
		cout << "/";
		cout << endl;
	}
#endif // RHOMBUS

#ifdef PLUS_MINUS
	int n;
	cout << "¬ведите размер фигуры: "; cin >> n;
	cout << "\n";

	for (int i = 0; i < n; i++) 
	{
		for (int j = 0; j < n; j++)
		{
			if (i % 2 == j % 2)
			{
				cout << "+ ";
			}
			else
			{
				cout << "- ";
			}
		}
		cout << endl;
	}
#endif // PLUS_MINUS

}