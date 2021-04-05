#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	for(int i=1 ; i <= n ; i++)
	{
		for(int j = n-i ; j > 0 ; j--)
		{
			cout << "  ";
		}
		for(int k=i ; k > 0 ; k--)
		{
			cout << "*" << " ";
		}
		for(int m=2 ; m <= i ; m++)
		{
			cout << "*" << " ";


		}
		cout << endl;
	}

	for(int i=n ; i >= 1 ; i--)
	{
		for(int j = n-i ; j > 0 ; j--)
		{
			cout << "  ";
		}
		for(int k=i ; k > 0 ; k--)
		{
			cout << "*" << " ";
		}
		for(int m=2 ; m <= i ; m++)
		{
			cout << "*" << " ";


		}
		cout << endl;
	}
}

