#include<stdio.h>
int main()
{
    int a;
    printf("enter the number: ");
    scanf("%d",&a);

    if(a%2==0)
    {
        printf("It is an even number ");
    }
    else
    {
        printf("It is an odd number ");
    }
}