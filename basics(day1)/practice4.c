/*Write a C program that accepts two item’s weight (floating points' values ) and number of purchase (floating points' values) and calculate the average value of the items*/
#include<stdio.h>
int main()
{
    float item1,item2,q1,q2,avg;
    printf("Enter the weight of Item1 :");
    scanf("%f",&item1);
    printf("\n Enter the quantity of Item1 :");
    scanf("%f",&q1);
    printf("\n Enter the weight of Item2 :");
    scanf("%f",&item2);
    printf("\n Enter the quantity of Item2 :");
    scanf("%f",&q2);

    avg=(((q1*item1)+(q2*item2))/(q1+q2));

    printf("\n Average weight of Items = %f",avg);

}