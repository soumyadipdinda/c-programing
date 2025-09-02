#include <stdio.h>
#include <stdlib.h>

int main() {
    int number, lastDigitMod, lastDigitNoMod;
    printf("Enter an integer: ");
    scanf("%d", &number);
    int absNumber = abs(number);
    lastDigitMod = absNumber % 10;
    lastDigitNoMod = absNumber - (absNumber / 10) * 10;
    printf("Last digit using modulus: %d\n", lastDigitMod);
    printf("Last digit without using modulus: %d\n", lastDigitNoMod);

    return 0;
}
