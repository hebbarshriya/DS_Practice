#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void isPalin(char str[],int index)
{
	int len;
	len = strlen(str)-(index + 1);

	if(str[index] == str[len])
	{
	   if(index+1 == len || index == len)
	   {
	      printf("Palindrome.");
	      return;
	   }

	   isPalin(str,index+1);
	}

	else
	{
	   printf("Not a Palindrome.");
	}
}
int main()
{
	char str[20];

		printf("Enter a Word : ");
	    scanf("%s",str);
	    isPalin(str,0);
	return 0;
}
