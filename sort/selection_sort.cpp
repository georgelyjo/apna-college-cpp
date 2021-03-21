#include <iostream>
using namespace std;
int main()
{
	 int arr[]={9,8,5,3,4,2,1,6};
	 int size = ((sizeof(arr)/sizeof(arr[0])));
	 for(int i=0 ; i < size-1 ; i++)
	 {
		 for(int j=i+1 ; j < size ; j++)
		 {
			 if(arr[i] > arr[j] )
			 {
				 int temp = arr[i];
				 arr[i] = arr[j];
				 arr[j] = temp;
			 }
		 }
	 }
	 for(int k=0; k < size  ; k++)
	 {
		 cout << arr[k] << endl;
	 }

}
