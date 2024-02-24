//wap to print table of 'n'
#include<stdio.h>
int main()
{
int n;
printf("Enter the value");
scanf("%d",&n);
for (int i=n;i<=n*10;i=i+n)
	{
	printf("%d \n",i);	
	}
}
