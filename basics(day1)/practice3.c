/*Write a C program that accepts two integers from the user and calculate the sum of the two integers*/
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the 1st integer :");
    scanf("%d",&a);
    printf("Enter the 2nd integer :");
    scanf("%d",&b);

    c=a+b;
    printf("Sum of the above two integer is = %d",c);


}