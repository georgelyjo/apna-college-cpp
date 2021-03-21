#include <iostream>
using namespace std;
int main()
{
        int n;
	cin >> n;
	int arr[n];
	for (int i=0 ; i < n ; i++)
	{
		cin >> arr[i];
	}	
	int size = sizeof(arr)/sizeof(arr[0]);
	int search;
	int flag = 0;
	int loc;
	cin >> search;
	for(int i=0 ; i < size ; i++)
	{
		if(search == arr[i])
			{	
				flag = 1;	
				loc = i;
			}
	}
	if ( flag == 0)
	{
		cout << "not found";
	}
	else
	{
		cout << "element found at" << loc+1 << endl;

	}
	return 0;
}

