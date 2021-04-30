#include <bits/stdc++.h>
using namespace std;
int sum(int n)
{
	if(n == 0)
	{
		return 0;
	}
int prev = sum(n-1);
int add = prev +n;
return add;
}
int main()
{
	cout <<	sum(4);
	return 0;
}

