#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr[50];
    cout<<"Number of Elements: ";
    cin>>n;
    // Taking input in array as the number of elements_______________________
    for(int i=0;i<n;i++) 
    {
        cin>>arr[i];
    }
    //Bubble Sort_______________________________
    for(int i=0;i<n-1;i++) // 'i' counts the number of passes. After each pass, one small element goes to its correct position which is at the end. At the last pass, the array is already sorted. So, i<n-1
    {
        for(int j=0;j<n-i-1;j++) // After each pass, the last elements are already sorted and we have to swap the unsorted elements. So, j<n-i-1
        {
            if(arr[j]<arr[j+1]) // This condition is for descending order elements
            {
                int temp = arr[j]; // Swapping the values using a temporary variable
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    // Output____________________________
    cout<<"Bubble Sort: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
