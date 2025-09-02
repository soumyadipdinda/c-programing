#include <stdio.h>
#include <math.h> 
int main() {
    double num;
    double floorVal, ceilVal;
    printf("Enter a number (positive or negative): ");
    scanf("%lf", &num);
    floorVal = floor(num);
    ceilVal = ceil(num);
    printf("Number: %.2lf\n", num);
    printf("Floor value: %.0lf\n", floorVal);
    printf("Ceiling value: %.0lf\n", ceilVal);
    return 0;
}
