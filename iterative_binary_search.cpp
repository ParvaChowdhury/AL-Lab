#include<iostream>
using namespace std;
int main(){
    int n,low,x, high,temp,count=0;
    cout<<"Enter array size:";
    cin>>n;
    int arr[n];
    cout<<"Enter elements:";
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter element to search";
    cin>>x;
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
    low=0;
    high=n-1;
    int flag=0;
    while (low <= high) {
        count++;
        int m =(low+high) / 2;
        count++;
        if (arr[m] == x){
            count++;
            cout<<"Present\n";
            count++;
            flag=1;}
        if (arr[m] < x){
            low = m + 1;
            count++;}
        else{
            high = m - 1;
            count++;}
    }
    if(flag!=1)
        cout<<"Not Present\n";
    cout<<"Number of steps for sum function "<<count;
    return 0;
}
