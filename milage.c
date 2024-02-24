#include<stdio.h>
int main()
{
    float distance;
    float fuel;
    printf("Input total distance in km: ");
    scanf("%f",&distance);
    printf("Enter the fuel spent in liters: ");
    scanf("%f",&fuel);

    float consumption= (distance/fuel);
    printf("Average consumption(km/lt) %.2f",consumption);
}