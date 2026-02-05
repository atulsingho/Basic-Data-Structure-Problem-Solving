#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, arr[100], value, i, pos;
    cout<<"Number of Elements: ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the value to insert: ";
    cin>>value;
    cout<<"Enter the position: ";
    cin>>pos;
    if(pos>n || pos<1)
    {
        cout<<"Position Error.";
    }
    else
    {
    for(i=n-1;i>=pos-1;i--)
    {
        arr[i+1] = arr[i];
    }
    arr[pos-1] = value;
    n++;
    cout<<"Array after insertion: ";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    }
}
