/*MWANZIA SAMUEL
ENE212-0225/2019*/
#include <stdio.h> 
#include <math.h>

int main() { double num1, num2; double sum, difference, quotient; 
double remainder;
printf("Enter the first number: ");
scanf("%lf", &num1);

printf("Enter the second number: ");
scanf("%lf", &num2);

sum = num1 + num2;
difference = num1 - num2;
quotient = num1 / num2;

printf("\nThe sum of your two numbers is %lf\n", sum);
printf("The difference of your two numbers is %lf\n", difference);
printf("The quotient of your two numbers is %lf\n", quotient);

/*check if num1 is odd or even*/
remainder = fmod(num1, 2);
if (remainder != 0) {
    printf("The remainder of %lf divided by 2 is %lf\n", num1, fabs(remainder));
    printf("%lf is an odd number.\n", num1);
} else {
    printf("%lf is an even number.\n", num1);
}

return 0;
}