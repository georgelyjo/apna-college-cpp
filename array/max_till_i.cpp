#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int arr[n];
	int m = -1002010;
	for(int i = 0 ; i < n ; i++)
	{
		cin >> arr[i];
	}
	
	for(int i = 0 ; i < n ; i++)
	{
		m = max(m,arr[i]);
		cout << m << endl;
	}
	return 0;
}
