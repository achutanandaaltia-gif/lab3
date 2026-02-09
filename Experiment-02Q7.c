/*Write a program to convert a string to lowercase using strlwr. */
#include<stdio.h>
#include<string.h>
int main()
{	char str[200];
	int i=0;
	printf("enter a string");
	gets(str);
	strlwr(str);
	printf("after lowercase %s\n",str);
}
