#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10], n, i, value;
    cout<<"Number of Elements: ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Searching Value:";
    cin>>value;
    int count = 0;
    for(i=0;i<n;i++)
    {
        if(arr[i]==value)
        {
            cout<<"Found at index "<<i;
            count++;
        }
    }
    if(count==0)
    {
        cout<<"Not found.";
    }
}
