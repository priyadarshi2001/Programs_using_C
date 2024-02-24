#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter two decimal numbers: ");
    scanf("%d%d",&a,&b);
    printf("values before swap a= %d, b= %d \n",a,b);
    c=a;
    a=b;
    b=c;
    printf("values after swap a= %d, b= %d \n",a,b);
}