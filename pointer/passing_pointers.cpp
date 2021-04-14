#include <bits/stdc++.h>
using namespace std;
void swap(int *a,int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
 int num1 = 2;
 int num2 = 10;
 int *a = &num1;
 int *b = &num2;
 swap(a,b);
 cout << num1 << num2 << endl;
 return 0;
}
