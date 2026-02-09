/*Write a program to compare two strings using strcmp.*/ 
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[50],str2[50];
	printf("enter str1\n");
	gets(str1);
	printf("enter str2\n");
	gets(str2);
	{
		if(strcmp (str1,str2)==0)
		printf("strings are same");
		else
		{
			printf("strings are not same");
			
		}
	}
}
