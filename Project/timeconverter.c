#include <stdio.h>
float convertTime(float value, int fromUnit, int toUnit) {
    float output;
    if (fromUnit == 1) { // convert from milliseconds
        if (toUnit == 2) // convert to Seconds
            output = value/1000;
        else if (toUnit == 3) // convert to Minutes
            output = value/60000;
        else if (toUnit == 4) // convert to Hours
            output = value/(3.6e+6);
        else if (toUnit == 5) // convert to Days
            output = value/(8.64e+7);
        else if (toUnit == 6) // convert to Weeks
            output = value/(6.048e+8);
        else if (toUnit == 7) // convert to Months
            output = value/(2.628e+9);
        else // same unit
            output = value;
    }
    else if (fromUnit == 2) { // convert from Seconds
        if (toUnit == 1) // convert to milliseconds
            output = value*1000;
        else if (toUnit == 3) // convert to Minutes
            output = value/60;
        else if (toUnit == 4) // convert to Hours
            output = value/3600;
        else if (toUnit == 5) // convert to Days
            output = value/86400;
        else if (toUnit == 6) // convert to Weeks
            output = value/604800;
        else if (toUnit == 7) // convert to Months
            output = value/(2.628e+6);
        else // same unit
            output = value;
    }
    else if (fromUnit == 3) { // convert from Minutes
        if (toUnit == 1) // convert to milliseconds
            output = value*60000;
        else if (toUnit == 2) // convert to Seconds
            output = value*60;
        else if (toUnit == 4) // convert to Hours
            output = value/60;
        else if (toUnit == 5) // convert to Days
            output = value/1440;
        else if (toUnit == 6) // convert to Weeks
            output = value/10080;
        else if (toUnit == 7) // convert to Months
            output = value/43800;
        else // same unit
            output = value;
    }
    else if (fromUnit == 4) { // convert from Hours
        if (toUnit == 1) // convert to milliseconds
            output = value*(3.6e+6);
        else if (toUnit == 2) // convert to Seconds
            output = value*3600;
        else if (toUnit == 3) // convert to Minutes
            output = value*60;
        else if (toUnit == 5) // convert to Days
            output = value/24;
        else if (toUnit == 6) // convert to Weeks
            output = value/168;
        else if (toUnit == 7) // convert to Months
            output = value/730;
        else // same unit
            output = value;
    }
    else if (fromUnit == 5) { // convert from Days
        if (toUnit == 1) // convert to milliseconds
            output = value*(8.64e+7);
        else if (toUnit == 2) // convert to Seconds
            output = value*86400;
        else if (toUnit == 3) // convert to Minutes
            output = value*1440;
        else if (toUnit == 4) // convert to Hours
            output = value*24;
        else if (toUnit == 6) // convert to Weeks
            output = value/7;
        else if (toUnit == 7) // convert to Months
            output = value/30.417;
        else // same unit
            output = value;
    }
    else if (fromUnit == 6) { // convert from Weeks
        if (toUnit == 1) // convert to milliseconds
            output = value*(6.048e+8);
        else if (toUnit == 2) // convert to Seconds
            output = value*604800;
        else if (toUnit == 3) // convert to Minutes
            output = value*10080;
        else if (toUnit == 4) // convert to Hours
            output = value*168;
        else if (toUnit == 5) // convert to Days
            output = value*7;
        else if (toUnit == 7) // convert to Months
            output = value/4.345;
        else // same unit
            output = value;
    }
    else { // convert from Months
        if (toUnit == 1) // convert to milliseconds
            output = value*(2.628e+9);
        else if (toUnit == 2) // convert to Seconds
            output = value*(2.628e+6);
        else if (toUnit == 3) // convert to Minutes
            output = value*43800;
        else if (toUnit == 4) // convert to Hours
            output = value*730;
        else if (toUnit == 5) // convert to Days
            output = value*30.417;
        else if (toUnit == 6) // convert to Weeks
            output = value*4.345;
        else // same unit
            output = value;
    }
    return output;
}
