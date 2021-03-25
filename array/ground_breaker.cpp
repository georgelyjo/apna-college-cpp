#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int arr[n+1];
	arr[n] = -1;
	for(int i=0 ; i < n ; i++)
	{
		cin >> arr[i];
	}
	int mx = -1;
	int ans = 0;
	for(int i=0 ; i < n ; i++)
	{
		if(n == 1)
		{
			cout << "1" << endl;
			return 0;
		}
		if(arr[i] > arr[i+1] && arr[i] > mx)
		{
			ans++;

		}
		mx = max(arr[i],mx);

		
	}
	cout << ans << endl;
	return 0;
}
	
