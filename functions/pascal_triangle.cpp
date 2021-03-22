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

	int num;
	cin >> num;
	for(int i=0 ; i < num ; i++)
	{
		for(int j = i ; j >= 0 ; j--)
		{
			cout << fact(i)/(fact(i-j)*fact(j)) << "\t";
		}
		cout << endl;
	}	
	return 0;

}

