/*Develop a program to convert a string to uppercase using strupr. */
#include<stdio.h>
#include<string.h>
int main()
{	char str[200];
	int i=0;
	printf("enter a string");
	gets(str);
	strupr(str);
	printf("after uppercase%s\n",str);
}
