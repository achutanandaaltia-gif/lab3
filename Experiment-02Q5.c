/* Write a program to check if a string is a palindrome using strrev. */
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[50],str2[50];
	printf("enter str1\n");
	gets(str1);
	
	{
		strcpy(str2,str1);
		strrev(str2);
		
		if(strcmp (str1,str2)==0)
		printf("palindrome\n");
		else
		{
			printf("not palindrome\n");
			
		}
	}
}
