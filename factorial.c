#include<stdio.h>
int main()
{
	int i,factorial=1,num;
	printf("Enter a num:\n");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		factorial=factorial*i;
	}
	printf("factorialorial of %d is: %d",num,factorial);
	return 0;
}