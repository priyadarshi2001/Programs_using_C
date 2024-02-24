/*Now solve the above question to check if atleast one of the conditions
 'a < 50' and 'a < b' is true*/
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the values of two variables a & b ");
    scanf("%d %d",&a,&b);

    c=a<50 || a<b;

    printf("\n output: %d",c);
}