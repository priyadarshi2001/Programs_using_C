/*this program explains */
#include <stdio.h>
extern int a, b; // Variable definition:
extern int c;
extern float f;
int main ()
{
int a, b; // Variable definition:
int c;
float f;
a=10; // actual initialization
b =20;
c = a + b;
printf("value of c : %d \n",c);
f = 70.0/3.0;
printf("value of f : %f \n", f);
return 0;
}
