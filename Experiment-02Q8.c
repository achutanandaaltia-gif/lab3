/*Implement a program to check if a substring exists within a string using strstr. */
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[50],str2[50];
int sub;
	printf("enter str1\n");
	gets(str1);
	printf("enter str\n");
	gets(str2);
	sub=strstr(str1,str2);
	printf("after substring\n%s",sub);
}
	
			
