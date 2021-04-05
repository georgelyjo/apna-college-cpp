#include <iostream>
using namespace std;
int main()
{
	int row,col;
	cin >> row >> col;
	int arr1[row][col];
	for(int i=0 ; i < row ; i++)
	{
		for(int j=0 ; j < col ;j++)

		{
			cin >> arr1[i][j];
		}
	}
	int search;
	cin >> search;
	int flag=0;
	
	for(int i=0 ; i < row ; i++)
	{
		for(int j=0 ; j < col ;j++)

		{
			if(arr1[i][j] == search)
			{
				flag=1;
				cout << i << j << endl;


			}
		}
	}
	if(flag == 0)
	{
		cout << "element was not found !!";
	}
	return 0;
}
