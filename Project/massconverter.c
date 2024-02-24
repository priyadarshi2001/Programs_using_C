#include <stdio.h>
float convertMass(float value, int fromUnit, int toUnit) { 
    float output;
    if (fromUnit == 1) { // convert from milligrams
        if (toUnit == 2) // convert to Grams
            output = value/1000;
        else if (toUnit == 3) // convert to Kilograms
            output = value/1000000;
        else if (toUnit == 4) // convert to pounds
            output = value/453600;
        else // same unit
            output = value;
    }
    else if (fromUnit == 2) { // convert from grams
        if (toUnit == 1) // convert to Milligrams
            output = value*1000;
        else if (toUnit == 3) // convert to Kilograms
            output = value/1000;
        else if (toUnit == 4) // convert to pounds
            output = value/453.6;
        else // same unit
            output = value;
    }
    else if (fromUnit == 3) { // convert from kilograms
        if (toUnit == 1) // convert to Milligrams
            output = value*1000000;
        else if (toUnit == 2) // convert to Grams
            output = value*1000;
        else if (toUnit == 4) // convert to Pounds
            output = value*2.205;
        else // same unit
            output = value;
    }
    else { // convert from Pounds
        if (toUnit == 1) // convert to Milligrams
            output = value*453600;
        else if (toUnit == 2) // convert to Grams
            output = value*453.6;
        else if (toUnit == 3) // convert to Kilograms
            output = value/2.205;
        else // same unit
            output = value;
    }
    return output;
}
