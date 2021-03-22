#include <iostream>
using namespace std;
int fact( int num)
{
	int factorial = 1;
	for(int i=1; i <= num ; i++)
	{
		factorial *= i;
	}
	return factorial;
}
int main()
{

	int n,r;
	cin >> n;
	cin >> r;

	int result;
	result = fact(n)/(fact(n-r)*fact(r));
	cout << result;
	return 0;

}

