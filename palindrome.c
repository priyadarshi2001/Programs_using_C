#include<stdio.h>
int main()
{
	int n,r,sum=1,temp;
	printf("Enter the number: \n");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		r=n%10;
		sum=(sum*10)+r;
		n=n/10;
	}
	if(temp==sum)
		printf("Palindrome Number");
	else
		printf("Not a Palindrome");
	return 0;
}
