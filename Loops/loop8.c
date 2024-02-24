//count digits in a given number
#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	int count=0;
	while(n!=0){
	n=n/10;
	count++;
	}
	printf("No. of digits in the number %d \n",count);
}
