/*
If a is 15, then what would be the value of:
printf("%d",++a);->16
printf("%d",a++);->16
printf("%d",--a);->16
printf("%d",a--);->16
*/
#include<stdio.h>
int main()
{
    int a=15;
    
    printf("%d \n",++a);
    printf("%d\n",a++);
    printf("%d\n",--a);
    printf("%d\n",a--);

}