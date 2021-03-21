#include <iostream>
using namespace std;
int  main()
{
	int arr[]={5,2,3,1,4,44,21,2,2};
	int size = (sizeof(arr)/sizeof(arr[0]));
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size-i-1;j++)
		{
			if(arr[j] >  arr[j+1])
			{
				int swap = arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=swap;
			}
		}
	}
	for(int i=0;i<size;i++)
	{
		cout << arr[i] << endl;
	}

	return 0;

}
