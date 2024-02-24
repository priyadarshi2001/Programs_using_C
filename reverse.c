#include<stdio.h>
int main()
{
	int num,rem,reverse=0;
	printf("\n Enter any No.:");
	scanf("%d",&num);
	printf("%d \n",num);
	while(num>0)
	{
		rem= num%10;
		reverse= reverse*10+rem;
		num/=10;
	}
	printf("%d \n",reverse);
	return 0;
}