/*MWANZIA SAMUEL
ENE212-0225/2019*/
#include <stdio.h>

/*Declare the fibonacci function*/
int fibonacci(int n);

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("The Fibonacci sequence when n = %d is:\n", n);
    for (int i = 0; i <= n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
    return 0;
}

/*Define the fibonacci function*/
int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}