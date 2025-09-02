#include <stdio.h>
#include <math.h> // For the pow() function

int main() {
    double principal, rate, time, amount, compoundInterest;
    printf("Enter the principal amount: ");
    scanf("%lf", &principal);
    printf("Enter the annual interest rate (in %%): ");
    scanf("%lf", &rate);
    printf("Enter the time (in years): ");
    scanf("%lf", &time);
    amount = principal * pow((1 + rate / 100), time);
    compoundInterest = amount - principal;
    printf("Compound Interest: %.2lf\n", compoundInterest);
    printf("Total Amount after %.2lf years: %.2lf\n", time, amount);

    return 0;
}
