//Initialize an array of 8 elements and find average of elements stored in array
#include<stdio.h>
void main ()
{
	int arr[8] = { 5,9,6,54,56,86,75,10 };
	int sum = 0;
	for (int i = 0; i < 8; i++)
	  sum += arr[i];
	float avg = sum / 8;
	printf("\tThe average of numbers in array is %f\n", avg);
}