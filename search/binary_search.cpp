#include <iostream>
using namespace std;
int flag = 0;
int binaryarray(int arr[],int start,int end,int search)
{
	while( start <= end)
	{
		 int mid = (start + end) / 2;
		if(arr[mid] == search)
		{
			return mid;
			flag = 1;
		}
		if( arr[mid] > search )
		{
			end = mid-1;
		}
		if( arr[mid] < search)
		{
			start = mid+1;
		}
	}
	return -1;
}
		
int main()
{
	int arr[]={8,10,12,21,27,34,42};
	int size = (sizeof(arr)/sizeof(arr[0]));
	int search;
	cin >> search;
	int pos = binaryarray(arr,0,size,search);
	if ( pos != -1)
	{
		cout << "element found at" << pos+1;
	}
	else
	{
		cout << " element not found " << endl;
	}	

	return 0;

}
