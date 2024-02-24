/*Write a program to enter the values of two variables 'a' and 'b' from keyboard and then check if both the conditions 'a < 50' and 'a < b' are true.*/
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the values of two variables a & b ");
    scanf("%d %d",&a,&b);

    c=a<50 && a<b;

    printf("\n output: %d",c);
}