#include <iostream>
using namespace std;
int main()
{
	int row;
	cin >> row;
	int count=0;
	for(int i=1;i<=row;i++)
	{
		for(int j=i;j>0;j--)
		{
			cout << "\t" << ++count ;
		}
		cout << endl;

	}
}

