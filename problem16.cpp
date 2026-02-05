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
        int max = i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]>arr[max])
            {
                max=j;
            }
        }
        int temp = arr[i];
        arr[i]=arr[max];
        arr[max]=temp;
    }
    cout<<"Selection Sort: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
