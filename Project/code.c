#include <stdio.h>
#include"Converter.h"
int main() 
{
    int userinput, fromUnit, toUnit;
    float value, output;
    printf("Welcome to the unit converter!\n");
    printMenu();
    scanf("%d", &userinput);
    //1.length
    if (userinput == 1) 
    {
        printf("You selected Length.\n");
        printf("Enter the value to convert: ");
        scanf("%f", &value);
        printLengthMenu();
        scanf("%d", &fromUnit);
        printf("Enter the unit to convert to: ");
        scanf("%d", &toUnit);
        output = convertLength(value, fromUnit, toUnit);
        printf("%.2f ", value);
        switch (fromUnit) 
        {
            case 1: printf("millimeters"); break;
            case 2: printf("centimeters"); break;
            case 3: printf("meters"); break;
            case 4: printf("kilometers"); break;
        }
    printf(" is equal to %.2f ", output);
        switch (toUnit) 
        {
            case 1: printf("millimeters"); break;
            case 2: printf("centimeters"); break;
            case 3: printf("meters"); break;
            case 4: printf("kilometers"); break;
        }
    printf(".\n");
    } 
    //2. mass/weight 
    else if (userinput == 2) 
    {
        printf("You selected Mass/Weight.\n");
        printf("Enter the value to convert: ");
        scanf("%f", &value);
        printMassMenu();
        scanf("%d", &fromUnit);
        printf("Enter the unit to convert to: ");
        scanf("%d", &toUnit);
        output = convertMass(value, fromUnit, toUnit);
        printf("%.2f ", value);
        switch (fromUnit)
        {
            case 1: printf("Milligram"); break;
            case 2: printf("Grams"); break;
            case 3: printf("Kilograms"); break;
            case 4: printf("Pounds"); break;
        }
            printf(" is equal to %.2f ", output);
            switch (toUnit) 
            {   
                case 1: printf("Milligram"); break;
                case 2: printf("Grams"); break;
                case 3: printf("Kilograms"); break;
                case 4: printf("Pounds"); break;
            }
                printf(".\n");
    }
    //3. volume 
    else if (userinput == 3)
    {
        printf("You selected Volume.\n");
        printf("Enter the value to convert: ");
        scanf("%f", &value);
        printVolumeMenu();
        scanf("%d", &fromUnit);
        printf("Enter the unit to convert to: ");
        scanf("%d", &toUnit);
        output = convertVolume(value, fromUnit, toUnit);
        printf("%.2f ", value);
            switch (fromUnit) 
            {
                case 1: printf("Liters"); break;
                case 2: printf("Gallons"); break;
                case 3: printf("Cubic meter"); break;
                case 4: printf("Cubic inch"); break;
            }
            printf(" is equal to %.2f ", output);
            switch (toUnit) 
            {
                case 1: printf("Liters"); break;
                case 2: printf("Gallons"); break;
                case 3: printf("Cubic meter"); break;
                case 4: printf("Cubic inch"); break;
            }
            printf(".\n");
    }
    //4.Temperature 
    else if (userinput == 4) 
    {
        printf("You selected Temperature.\n");
        printf("Enter the value to convert: ");
        scanf("%f", &value);
        printTempMenu();
        scanf("%d", &fromUnit);
        printf("Enter the unit to convert to: ");
        scanf("%d", &toUnit);
        output = convertTemp(value, fromUnit, toUnit);
        printf("%.2f ", value);
        switch (fromUnit) 
        {
            case 1: printf("Celcius"); break;
            case 2: printf("Fahrenheit"); break;
            case 3: printf("Kelvin"); break;
            
        }
        printf(" is equal to %.2f ", output);
        switch (toUnit) 
        {
            case 1: printf("Celcius"); break;
            case 2: printf("Fahrenheit"); break;
            case 3: printf("Kelvin"); break;
            
        }
        printf(".\n");
    }
    //5.Time 
    else if (userinput == 5)
    {
        printf("You selected Time.\n");
        printf("Enter the value to convert: ");
        scanf("%f", &value);
        printTimeMenu();
        scanf("%d", &fromUnit);
        printf("Enter the unit to convert to: ");
        scanf("%d", &toUnit);
        output = convertTime(value, fromUnit, toUnit);
        printf("%.2f ", value);
            switch (fromUnit) 
            {
                case 1: printf("Milliseconds"); break;
                case 2: printf("Seconds"); break;
                case 3: printf("Minutes"); break;
                case 4: printf("Hours"); break;
                case 5: printf("Days"); break;
                case 6: printf("Weeks"); break;
                case 7: printf("Months"); break;
            }
            printf(" is equal to %.2f ", output);
            switch (toUnit) 
            {
                case 1: printf("Milliseconds"); break;
                case 2: printf("Seconds"); break;
                case 3: printf("Minutes"); break;
                case 4: printf("Hours"); break;
                case 5: printf("Days"); break;
                case 6: printf("Weeks"); break;
                case 7: printf("Months"); break;
            }
            printf(".\n");
    }
else {
     printf("Invalid userinput.\n");
     }

    return 0;
}