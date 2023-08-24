#include "average.h"
#include <stdio.h>

int main(){

    unsigned int num_vals = 4;
    float values[] = {1.7, 44.5, 6.8, 88.9};

    float av = average(values, num_vals);
    printf("Average is %f\n", av);

    return 0;
}