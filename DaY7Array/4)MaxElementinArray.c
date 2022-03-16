// Find maximum element in the array
#include <stdio.h>
void main()
{   //Accept values in the array
    printf("Enter values in the array\n");
    int arr[10];
    for (int i = 0; i < 10; i++)
        scanf("%d", &arr[i]);

    /*Start checking for maximum value from 1st index of array
    and store maximum value in arr[0]*/
    for (int j = 0; j < 10; j++)
    {
        if (arr[0] < arr[j])
        {
            arr[0] = arr[j];
        }
    }
    //Display maximum value 
    printf("\n max element in the array is %d", arr[0]);
}