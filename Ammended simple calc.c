/*MWANZIA SAMUEL
ENE212-0225/2019*/
#include <stdio.h>
#include <math.h>

double add(double num1, double num2) {
    return num1 + num2;
}

double subtract(double num1, double num2) {
    return num1 - num2;
}

double divide(double num1, double num2) {
    if (num2 == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return 0;
    }
    return num1 / num2;
}

double get_remainder(double num1, double num2) {
    double remainder = fmod(num1, num2);
    if (fabs(remainder) < 0.00001) {                           /* check if remainder is close to zero*/
        printf("The remainder of %lf divided by %lf is 0.\n", num1, num2);
    } else {
        printf("The remainder of %lf divided by %lf is %lf.\n", num1, num2, fabs(remainder));
    }
    return remainder;
}

int is_odd(double num) {
    double remainder = fmod(num, 2);
    if (remainder != 0) {
        return 1;
    }
    return 0;
}

int main() {
    double num1, num2;
    double sum, difference, quotient;
    double remainder;

    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    sum = add(num1, num2);
    difference = subtract(num1, num2);
    quotient = divide(num1, num2);

    printf("\nThe sum of your two numbers is %lf\n", sum);
    printf("The difference of your two numbers is %lf\n", difference);
    printf("The quotient of your two numbers is %lf\n", quotient);

    remainder = get_remainder(num1, 2);
    if (is_odd(num1)) {
        printf("%lf is an odd number.\n", num1);
    } else {
        printf("%lf is an even number.\n", num1);
    }

    return 0;
}