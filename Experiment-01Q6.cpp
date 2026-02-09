/*Write a program to replace spaces in a string with hyphens*/
#include<stdio.h>
#include<string.h>
int main()
{	char str[200];
	int i=0;
	printf("enter a string");
	gets(str);
	for(i;str[i]!=0;i++)
	{
	
	if(str[i]==' ')
	str[i]='-';
}
printf("modified string=%s\n",str);
	
}
