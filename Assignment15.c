#include <stdio.h>
void main()
{
    int a;
 
    printf("Input a number :");
    scanf("%d", &a);
    if (a >= 0)
        printf("%d is a positive number \n", a);
    else
        printf("%d is a negative number \n", a);
}
