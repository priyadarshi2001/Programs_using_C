#include <stdio.h>
float convertVolume(float value, int fromUnit, int toUnit) {
    float output;            
    if (fromUnit == 1) { // convert from Liters
        if (toUnit == 2) // convert to Gallons
            output = value/3.785;
        else if (toUnit == 3) // convert to Cubic meters
            output = value/1000;
        else if (toUnit == 4) // convert to Cubic inch
            output = value*61.024;
        else // same unit
            output = value;
    }
    else if (fromUnit == 2) { // convert from Gallons
        if (toUnit == 1) // convert to Liters
            output = value*3.785;
        else if (toUnit == 3) // convert to Cubic meters
            output = value/264.2;
        else if (toUnit == 4) // convert to Cubic inch
            output = value*231;
        else // same unit
            output = value;
    }
    else if (fromUnit == 3) { // convert from Cubic meters
        if (toUnit == 1) // convert to Liters
            output = value*1000;
        else if (toUnit == 2) // convert to Gallons
            output = value*264.2;
        else if (toUnit == 4) // convert to Cubic inch
            output = value*61020;
        else // same unit
            output = value;
    }
    else { // convert from Cubic inch
        if (toUnit == 1) // convert to Liters
            output = value/61.024;
        else if (toUnit == 2) // convert to Gallons
            output = value/231;
        else if (toUnit == 3) // convert to Cubic meters
            output = value/61020;
        else // same unit
            output = value;
    }
    return output;
}
