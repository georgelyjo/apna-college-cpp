#include <bits/stdc++.h>
using namespace std;
int ispair(int a , int b , int c)
{
	int x,y,z;
	x = max( a , max( b ,c));
	if (x == a)
	{
		y  = b;
		z  = c;
	}
	if(x == b)
	{
		y = a;
		z = c;
	}
	else
	{
		y = a;
		y = b;
	}
	if(a*a == b*b + c*c)
	{
		return 1;
	}
	return 0;

}
int main()
{
	int a,b,c;
	cin >> a >> b >> c;
	int flag = 0;
	flag  = ispair(a,b,c);
	if ( flag == 1)
	{
		cout << "pythagorean pair";
	}
	else
	{
		cout << "not a pair";
	}
	return 0;

}
