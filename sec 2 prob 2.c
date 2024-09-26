#include<stdio.h>
int main ()
{
	int age;
	char ctzn;
	printf("Enter your age: ");
	scanf("%d", &age);
	printf("Are you Citizen of Pakistan (Y/N)? ");
	scanf(" %c", &ctzn);
	if(age>=18 && ctzn =='Y')
	{ printf(7"you can vote");
	}
	 else printf("you cant vote");
	 return 0;	
	
	
}
