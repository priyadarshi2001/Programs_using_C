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
