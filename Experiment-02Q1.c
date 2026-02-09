/*Develop a program to concatenate two strings */
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[50],str2[50];
	printf("enter str1\n");
	gets(str1);
	printf("enter str2\n");
	gets(str2);
	strcat(str1,str2);
	printf("concatenate two strings\n%s\n",str1);
}
