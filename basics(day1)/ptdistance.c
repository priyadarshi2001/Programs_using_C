#include<stdio.h>
#include<math.h>
int main()
{
double x1=25;
float x2=15;
float y1=35;
float y2=10;
float dist= ((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
printf("Distance between 2 points= %f",sqrt(dist));
}