#include <stdio.h>
int main()
{
    int arr[] = {4,9,2,5,1};
    int max = arr[0];
    for(int i=1;i<5;i++)
    {
        if(max<arr[i])
        {
            max = arr[i];
        }
    }
    printf("Maximum = %d",max);
    return 0;
}
