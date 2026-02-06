#include <stdio.h>
int main()
{
    int arr[] = {4,9,2,5,1};
    int max = arr[0]; //Consider as the first element is maximum
    for(int i=1;i<5;i++)
    {
        if(max<arr[i]) //Compares with every element starting from the second
        {
            max = arr[i]; //Makes the maximum if the intital value is greater than new value
        }
    }
    printf("Maximum = %d",max); //prints the maximum value
    return 0;
}
