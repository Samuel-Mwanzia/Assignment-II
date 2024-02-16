/*MWANZIA SAMUEL
ENE212-0225/2019*/
#include <stdio.h>

int reverse_number(int n) {
    int reversed = 0;
    while (n != 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }
    return reversed;
}

void is_palindrome(int n) {
    int reversed = reverse_number(n);
    if (n == reversed) {
        printf("%d is a palindrome.\n", n);
    } else {
        printf("%d is not a palindrome.\n", n);
    }
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    is_palindrome(n);
    return 0;
}