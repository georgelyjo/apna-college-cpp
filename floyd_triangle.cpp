#include <iostream>
using namespace std;
int main()
{
	int row;
	cin >> row;
	int count=0;
	for(int i=1;i<=row;i++)
	{
		for(int j=i;j>0;j--)
		{
			cout << "\t" << ++count ;
		}
		cout << endl;

	}
}
/* --output--
 * 1
 * 2	3
 * 4	5	6
 * 7	8	9	10
 * 11	12	13	14	15
 * if input = 5 */
