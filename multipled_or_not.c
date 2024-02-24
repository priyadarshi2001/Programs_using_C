#include<stdio.h>
int main()
{
    int a,b,div;
    printf("Enter the 1st number: ");
    scanf("%d",&a);
    printf("Enter the 2nd number: ");
    scanf("%d",&b);

    div=b%a;
    if(div==0)
    {
        printf("Multiplied!");
    }
    return 0;
}