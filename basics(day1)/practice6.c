/*Write a C program to convert a given integer (in days) to years, months and days, assumes that all months have 30 days and all years have 365 days*/
#include<stdio.h>
int main()
{
    int a,year,month,day;
    printf("Enter the number of the day: ");
    scanf("%d",&a);

    year= a/365;
    month= (a-(year*365))/30;
    day= (a-(year*365)-(month*30));

    printf("Years: %d \n",year);
    printf("Months: %d \n",month);
    printf("Days: %d \n",day);

    return 0;
}