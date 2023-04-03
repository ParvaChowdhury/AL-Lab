#include<iostream>
using namespace std;
int count=0;
int binarySearch(int arr[], int x, int low, int high){
    int mid=0;
           if (low > high)
               return -1;
           else
               mid = (low + high) / 2;
                   if (x == arr[mid])
                        return mid;

               else if (x > arr[mid])
                   return binarySearch(arr, x, mid + 1, high);

               else
                   return binarySearch(arr, x, low, mid - 1);
    return -1;
}
int main(){
    int n,low,x,mid, high,temp=0;
    cout<<"Enter array size:";
    cin>>n;
    int arr[n];
    cout<<"Enter elements:";
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter element to search";
    cin>>x;
    low=0;
    high=n-1;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++) {
            if(arr[i]>arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    int result=binarySearch(arr,x,0,n-1);
    if(result==-1)
        cout<<"Not Present";
    else
        cout<<"Present";

    cout<<"Number of steps for sum function "<<count;
}

