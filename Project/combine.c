#include <stdio.h>
float convertLength(float value, int fromUnit, int toUnit) {
    float output;
    if (fromUnit == 1) { // convert from millimeters
        if (toUnit == 2) // convert to centimeters
            output = value/10;
        else if (toUnit == 3) // convert to meters
            output = value/1000;
        else if (toUnit == 4) // convert to kilometers
            output = value/1000000;
        else // same unit
            output = value;
    }
    else if (fromUnit == 2) { // convert from centimeters
        if (toUnit == 1) // convert to millimeters
            output = value*10;
        else if (toUnit == 3) // convert to meters
            output = value/100;
        else if (toUnit == 4) // convert to kilometers
            output = value/100000;
        else // same unit
            output = value;
    }
    else if (fromUnit == 3) { // convert from meters
        if (toUnit == 1) // convert to millimeters
            output = value*1000;
        else if (toUnit == 2) // convert to centimeters
            output = value*100;
        else if (toUnit == 4) // convert to kilometers
            output = value/1000;
        else // same unit
            output = value;
    }
    else { // convert from kilometers
        if (toUnit == 1) // convert to millimeters
            output = value*1000000;
        else if (toUnit == 2) // convert to centimeters
            output = value*100000;
        else if (toUnit == 3) // convert to meters
            output = value*1000;
        else // same unit
            output = value;
    }
    return output;
}
void printLengthMenu() {
    printf("Select the units you would like to convert:\n");
    printf("1. Millimeters\n");
    printf("2. Centimeters\n");
    printf("3. Meters\n");
    printf("4. Kilometers\n");
    printf("Enter your choice (1-4): ");
}
void printMenu() {
    printf("Select the conversion you would like to perform:\n");
    printf("1. Length\n");
    printf("2. Mass/Weight\n");
    printf("3. Volume\n");
    printf("4. Temperature\n");
    printf("5. Time\n");
    printf("6. Pressure\n");
    printf("7. Speed\n");
    printf("8. Energy\n");
    printf("Enter your choice (1-8): ");
}

int main() 
{
    int userinput, fromUnit, toUnit;
    float value, output;
    printf("Welcome to the unit converter!\n");
    printMenu();
    scanf("%d", &userinput);
    if (userinput == 1) {
        printf("You selected Length.\n");
        printf("Enter the value to convert: ");
        scanf("%f", &value);
        printLengthMenu();
        scanf("%d", &fromUnit);
        printf("Enter the unit to convert to: ");
        scanf("%d", &toUnit);
        output = convertLength(value, fromUnit, toUnit);
        printf("%.2f ", value);
        switch (fromUnit) {
            case 1: printf("millimeters"); break;
            case 2: printf("centimeters"); break;
            case 3: printf("meters"); break;
            case 4: printf("kilometers"); break;
    }
    printf(" is equal to %.2f ", output);
    switch (toUnit) {
        case 1: printf("millimeters"); break;
        case 2: printf("centimeters"); break;
        case 3: printf("meters"); break;
        case 4: printf("kilometers"); break;
    }
    printf(".\n");
}
else {
    printf("Invalid userinput.\n");
}

return 0;
}