#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the 1st number: ");
    scanf("%d",&x);
    printf("Enter the 2nd number: ");
    scanf("%d",&y);
    int z=x%y;
    if(z==0)
    {
        printf("Output is : %d",x/y);
    }
    else
    {
        printf("Division not possible");
    }


}