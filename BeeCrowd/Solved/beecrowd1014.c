#include <stdio.h>

int main(){

    float consumption, average;
    int distance;

    scanf("%i %f", &distance, &consumption);

    average = distance/consumption;

    printf("%.3f km/l\n", average);

    return 0;
}