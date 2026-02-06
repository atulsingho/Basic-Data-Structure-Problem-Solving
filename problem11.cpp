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
        cin>>arr[i]; //Array input
    }
    cout<<"Searching Value:";
    cin>>value;
    int count = 0;
    for(i=0;i<n;i++) 
    {
        if(arr[i]==value) //Checks every element one by one and if it matches, then the value found at index 'i'
        {
            cout<<"Found at index "<<i;
            count++; //It ensures that the value exists
        }
    }
    if(count==0) //if the value not found, it will enter this condition
    {
        cout<<"Not found.";
    }
}
