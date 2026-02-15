#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100];
    int n;
    cout<<"Number of Elements: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                cout<<"Double Value found which is "<<arr[i];
                return 0;
            }
        }
    }
    cout<<"Not found.";
    return 0;
}
