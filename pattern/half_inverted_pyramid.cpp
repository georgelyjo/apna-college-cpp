#include <iostream>
using namespace std;
int main()
{
	int row,col;
	cin >> row;
	for(int i=row;i>=0;i--)
	{
		for(int j=i-1;j>=0;j--)
		{
			cout << "*";
		}
		cout << endl;
	}
}
