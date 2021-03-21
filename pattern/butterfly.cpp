#include <iostream>
using namespace std;
int main()
{
	int row;
	cin >> row;
	for(int i=0 ; i < row ; i++)
	{
		for(int j=i ; j > 0 ; j--)
		{
			cout << "*";
		}
		int space = 2*row - 2*i;
		for(int i=0; i < space ; i++)
		{
			cout << " ";
		}
		for(int j=i; j > 0 ; j--)
		{
			cout << "*";
		}
		cout << endl;
	}

	for(int i=row ; i > 0 ; i--)
	{
		for(int j=i ; j > 0 ; j--)
		{
			cout << "*";
		}
		int space = 2*row - 2*i;
		for(int i=0; i < space ; i++)
		{
			cout << " ";
		}
		for(int j=i; j > 0 ; j--)
		{
			cout << "*";
		}
		cout << endl;
	}

}
