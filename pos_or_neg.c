#include<stdio.h>
int main()
{
    int num;
    printf("Ënter a number:");
    scanf("%d",&num);
    if(num <= 0)
    {
        printf("You Entered a negative number");
    }
    else
    {
        printf("You Entered a positive number");
    }
}