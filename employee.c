#include<stdio.h>
int main()
{
    int a;
    float b,c;
    printf("Enter the employee ID : ");
    scanf("%d",&a);
    printf("Enter the working hours : ");
    scanf("%f",&b);
    printf("Salary amount/hr : ");
    scanf("%f",&c);

    float salary= b*c;
    printf("Employee ID = %d \n",a);
    printf("Salary = U$ %.2f",salary);
        
}