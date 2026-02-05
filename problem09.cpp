#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100], n, i;
    cout<<"Number of Elements: ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        arr[i] = arr[i+1];
    }
    n--;
    cout<<"Array After Deletion: ";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}
