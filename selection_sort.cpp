#include <iostream>
using namespace std;
int count=0;
void selectionSort(int arr[], int n)
{
	int i, j, index;
	count++;
	for (i = 0; i < n-1; i++)
	{
	    count++;
	    count++;
		index = i;
		count++;
		for (j = i+1; j < n; j++){
            count++;
            if (arr[j] < arr[index]){
                count++;
                index = j;
                count++;
            }
		}
		if(index!=i){
			count++;
			swap(arr[index], arr[i]);
			count++;
		}
	}
}

int main()
{
	int n;
	cout<<"Enter array size:";
    cin>>n;
    int arr[n];
    cout<<"Enter elements:";
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
	selectionSort(arr, n);
	cout << "Sorted array: \n";
	for (int i = 0; i <n; i++)
		cout << arr[i] << " ";
    cout<<endl<<"Number of steps for sum function "<<count;
	return 0;
}

