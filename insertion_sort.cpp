#include <iostream>
using namespace std;
int count=0;
void insertionSort(int arr[], int n)
{
	int i, key, j;
	count++;
	for (i = 1; i < n; i++)
	{
	    count++;
        count++;
		key = arr[i];
		count++;
		j = i - 1;
		count++;
		while (j >= 0 && arr[j] > key)
		{
		    count++;
		    count++;
			arr[j + 1] = arr[j];
			count++;
			j = j - 1;
			count++;
        }
		arr[j + 1] = key;
		count++;
	}
	count++;
}
int main(){
	int n;
	cout<<"Enter array size:";
    cin>>n;
    int arr[n];
    cout<<"Enter elements:";
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
	insertionSort(arr, n);
	cout << "Sorted array: \n"<<endl;
	for (int i = 0; i <n; i++)
		cout << arr[i] << " ";
    cout<<"Number of steps for sum function "<<count;
	return 0;
}

