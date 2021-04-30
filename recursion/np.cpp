#include <bits/stdc++.h>
using namespace std;
int power(int n,int p)
{
	if(p == 0)
	{
		return 1;
	}
	int prev = power(n,p-1);
	return prev*n;

}
int main()
{
	int p,n;
	cin >> p >> n;

	cout << power(4,3);
	return 0;
}
