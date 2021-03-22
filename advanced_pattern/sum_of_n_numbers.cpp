#include <iostream>
using namespace std;
int sum(int num)
{
	int res;
	res = (num * (num + 1)) / 2;
	return res;

}
int main()
{
	int num;
	cin >> num;
	int result = sum(num);
	cout << result;
}
