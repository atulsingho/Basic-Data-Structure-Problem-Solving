#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100], n, i, pos;
    cout<<"Number of Elements: ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Deleting Position: ";
    cin>>pos;
    if(pos<n && pos>0)
    {
        for(i=pos-1;i<n;i++)
        {
            arr[i]=arr[i+1];
        }
        n--;
        cout<<"Array After Deletion: ";
        for(i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
    else
    {
        cout<<"Postion Error.";
    }
}
