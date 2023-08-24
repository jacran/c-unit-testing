#include "average.h"


float average(float values[], unsigned int num_values){

    float return_value = 0.0;

    if(num_values == 0) return return_value;

    for (unsigned int i = 0; i < num_values; i++)
    {
        return_value += values[i];
    }
    
    return (return_value/(float)num_values);
}
