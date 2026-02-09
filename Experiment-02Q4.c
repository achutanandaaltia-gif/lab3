/*Write a program to copy one string to another using strcpy.*/
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[50],str2[50];
	printf("enter str1\n");
	gets(str1);
	strcpy(str2,str1);
	
	printf("after copy\n%s",str2);
}
