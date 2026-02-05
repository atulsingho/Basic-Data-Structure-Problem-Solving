#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, arr[100], value, i;
    cout<<" Number of Elements: ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the value to insert at begining:";
    cin>>value;
    for(i=n;i>0;i--)
    {
        arr[i] = arr[i-1];
    }
    arr[0] = value;
    n++;
    cout<<"Array after insertion: ";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
