/*Create a program to find the length of a string using strlen. */
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[50];
	printf("enter str1\n");
	gets(str1);
	printf("The length of a string\n%d",strlen(str1));
}
