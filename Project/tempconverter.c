#include <stdio.h>
float convertTemp(float value, int fromUnit, int toUnit) 
{
    float output;
    
    if (fromUnit == 1) 
        { // convert from celcius
            if (toUnit == 2) // convert to fahrenheit
            output = ((value*9/5)+32);
            else if (toUnit == 3) // convert to kelvin
            output = value+273.15;
            else // same unit
            output = value;
        }
        else if (fromUnit == 2) 
        { // convert from fahrenheit
            if (toUnit == 1) // convert to celcius
            output = ((value-32)*5/9);
            else if (toUnit == 3) // convert to kelvin
            output = (((value-32)*5/9)+273.15);
            else // same unit
            output = value;
        }
        else 
        { // convert from kelvin
        if (toUnit == 1) // convert to celcius
            output = value-273.15;
        else if (toUnit == 2) // convert to fahrenheit
            output = (((value-273.15)*9/5)+32);
        else // same unit
            output = value;
        }
    
    return output;
}
