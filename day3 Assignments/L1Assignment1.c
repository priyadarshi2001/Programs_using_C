/*What would be the value of 'a':
a. int a = 10/45*23%45/(45%4*21)
b. float a = 10+45.0*23-45+(4*21.0)*/

#include<stdio.h>
int main()
{
    int a1;
    float a2;

    a1=10/45*23%45/(45%4*21);
    a2=10+45.0*23-45+(4*21.0);

    printf("value of Int a= %d \n",a1);
    printf("value of float a= %f",a2);

}
