#include <iostream>
using namespace std;
void fibonacci(int num)
{
	int t1=0;
	int t2=1;
	int nextterm;
	for(int i=0 ; i < num ; i++)
	{
		nextterm = t1 + t2;
		cout << t1 << "\t";
		t1 = t2;
		t2 = nextterm;
	}
	return;
}
int main()
{
	int num;
	cin >> num;
	fibonacci(num);
}
