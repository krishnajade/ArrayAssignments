/*Create an array of size 8 and store some values in it. 
Accept number from user and find if it exists in array.
Print its's position and count*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
    int num, count = 0;
    //Initialize Array
    int arr[8] = { 10, 53, 20, 20, 26, 93, 78, 93 };
    //Accpet a number from user to be searched
    printf("Enter a number\n");
    scanf("%d", &num);
    //Check if number is present in the array and count it's occurence
    for (int i = 0; i < 8; i++)
    {
        if (arr[i] == num)
        {
            count++;
            printf("The given number is present at %d index \n", i);
        }
    }
    if (count == 0)
    {
        printf("Given number is not present in the array");
    }
    else
        printf("\nGiven number is present %d times in the array", count);
}