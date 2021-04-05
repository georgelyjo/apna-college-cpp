#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	for(int i = 0 ; i < n ; i++)
	{	       	
		for(int j = n-i-1 ; j > 0 ; j--)
		{
			cout << " ";
		}
		for(int k=n; k > 0 ; k--)
		{
			cout << "*";
		}
		cout << endl;

	}


	return 0;

}
