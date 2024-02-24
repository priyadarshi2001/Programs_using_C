#include<stdio.h>
#include<math.h>
int main()

{
float a,b,c;
printf("input the 1st number a: ");	
scanf("%f",&a);
printf("input the 2nd number b: ");
scanf("%f",&b);
printf("input the 3rd number c: ");
scanf("%f",&c);

//float a,b,c;
float z=sqrt((b*b)-(4*a*c));

float x1,x2;
x1= ((-b)+z)/(2*a);
x2= ((-b)-z)/(2*a);

printf("The roots for the equation %fx2+%fx+%f=0 is \n",a,b,c);
printf("x1= %f and x2= %f",x1,x2);

return(0);
}