#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int arr[n];
	for ( int i= 0 ; i < n ; i++)
	{ 
		cin  >> arr[i]; 
	}
	int MAX_INT = 1000000000;
	int N = 1e6+2;
	int minindx = MAX_INT;
	int idx[N];
	for(int j=0 ; j < N ; j++)
	{
		idx[j] = -1;
	
	}
	for(int i = 0 ; i < n  ; i++)
	{
		if( idx[arr[i]] != -1)
		{
			minindx = min(minindx,idx[arr[i]]);
			
		}
		else
		{
			idx[arr[i]] = i ;
		}

		if( minindx == MAX_INT)
		{
			minindx = -1;

		}
	}
	cout << minindx;


}
