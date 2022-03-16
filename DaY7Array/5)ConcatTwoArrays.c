//Concat two arrays into third array
#include<stdio.h>
void main()
{
	int a[5] = { 10,20,30,40,50 };
	int b[5] = { 1,2,3,4,5 };
	int c[10] ;
	          
	printf("Array c[10] = {");

	for (int i = 0; i < 5; i++)
	{
		c[i]     = a[i];
		c[i + 5] = b[i];	
	}	
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", c[i]);	
	}
	printf("}");
}