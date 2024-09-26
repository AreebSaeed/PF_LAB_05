#include<stdio.h>
int main()
{
	int n1, n2, max;
	printf("Enter first number n1 ");
	scanf("%d", &n1);
	printf("Enter second number n2: ");
	scanf("%d", &n2);
	n1 > n2 ? printf("n1 is greater") : printf("n2 is greater");
	return 0;	

}