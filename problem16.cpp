#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr[50];
    cout<<"Number of Elements: ";
    cin>>n;
    for(int i=0;i<n;i++) //Array input as the number of elements
    {
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++)  //'i' states as the correct position for element which will be placed. (i<n-1) because of j=i+1. if i<n, j will have the value error
    {
        int max = i; // Assume the first element is the maximum number as per loop
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]>arr[max])  // This condition is only for Decsending Order elements
            {
                max=j; // 'j' checks every elements sequentially and find the maximum value
            }
        }
        int temp = arr[i]; //Swapping the values using a temporary variable
        arr[i]=arr[max];
        arr[max]=temp;     
    }
    cout<<"Selection Sort: "; //Array output as the number of elements
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
