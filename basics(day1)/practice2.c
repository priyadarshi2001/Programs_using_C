/*Write a C program to convert specified days into years, weeks and days*/
#include<stdio.h>
int main()
{
    int a,year,week,day;
    printf("Enter the number of the day: ");
    scanf("%d",&a);

    year= a/365;
    week= (a-(year*365))/7;
    day= (a-(year*365)-(week*7));

    printf("Years: %d \n",year);
    printf("Weeks: %d \n",week);
    printf("Days: %d \n",day);

    return 0;
}