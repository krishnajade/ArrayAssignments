// Find maximum element in the array
#include <stdio.h>
void main()
{
    printf("Enter values in the array\n");
    int arr[10];

    for (int i = 0; i < 10; i++)
        scanf("%d", &arr[i]);

    for (int j = 0; j < 10; j++)
    {
        if (arr[0] < arr[j])
        {
            arr[0] = arr[j];
        }
    }
    printf("\n max element in the array is %d", arr[0]);
}