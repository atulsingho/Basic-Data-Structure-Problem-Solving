#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={6,5,4,3,2,1};
    int key, low=0, high=5,mid,count=0;
    cout<<"Find the value";
    cin>>key;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==key)
        {
            cout<<"Found at index"<<mid;
            return 0;
        }
        else if(arr[mid]>key) //Condtition of Descending Order
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
        

    }
    cout<<"Not found";
    return 0;
    
 
}
