/*Create 2 arrays a[5] and b[5]. Add corresponding elements,store in array c[5] and print c[5]*/
#include<stdio.h>
void main()
{
	int a[5] = { 10,20,30,40,50 };
	int b[5] = { 15,25,35,45,55 };
	int c[5];
	printf("Array c[i] =");
	//Adding elements from two arrays 
	for (int i = 0; i < 5; i++)
	{
		c[i] = a[i] + b[i];
		//Display the result in third array
		printf(" %d ", c[i]);
	}	
}
