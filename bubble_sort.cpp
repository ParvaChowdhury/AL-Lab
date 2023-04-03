#include <iostream>
using namespace std;
int count=0;
void bubbleSort(int arr[], int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++){
        count++;
		for (j = 0; j < n - i - 1; j++){
            count++;
			if (arr[j] > arr[j + 1]){
                count++;
                count++;
				swap(arr[j], arr[j + 1]);}}}
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
	bubbleSort(arr, n);
	cout << "Sorted array: \n";
	for (int i = 0; i <n; i++)
		cout << arr[i] << " ";
    cout<<endl<<"Number of steps for sum function "<<count;
	return 0;
}
