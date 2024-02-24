#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the 2 values ");
    scanf("%d%d",&a,&b);
    int Quotient,Remainder;
    Quotient= a/b;
    Remainder= a%b;

    printf("Quotient = %d \n Remainder = %d \n",Quotient,Remainder);
    return 0;
}