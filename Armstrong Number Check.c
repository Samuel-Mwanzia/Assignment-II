/*MWANZIA SAMUEL 
ENE212-0225/2019*/
#include <stdio.h>
#include <math.h>

int num_digits(int n) {
    int count = 0;
    while (n != 0) {
        n /= 10;
        count++;
    }
    return count;
}

int is_armstrong(int n) {
    int digits = num_digits(n);
    int sum = 0;
    int original_n = n;
    while (n != 0) {
        int digit = n % 10;
        sum += pow(digit, digits);
        n /= 10;
    }
    return sum == original_n;
}

void print_armstrong_message(int n) {
    if (is_armstrong(n)) {
        printf("%d is an Armstrong number.\n", n);
    } else {
        printf("%d is not an Armstrong number.\n", n);
    }
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    print_armstrong_message(n);
    return 0;
}