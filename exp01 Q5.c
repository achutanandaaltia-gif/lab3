/*Create a program to input a sentence and display the total number of words. */
#include<stdio.h>
#include<string.h>
int main()
{
	char str[200];
	int i=0,count=0;
	printf("enter a sentence");
	gets(str);
	for(i;str[i]!=0;i++)
	{
	
	if(str[i]==' ')
	count++;
}
printf("total number of words=%d\n",count);
	
}

