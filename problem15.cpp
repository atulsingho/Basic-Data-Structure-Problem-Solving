#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr[50];
    cout<<"Number of Elements: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]<arr[j+1])
            {
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<"Bubble Sort: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
