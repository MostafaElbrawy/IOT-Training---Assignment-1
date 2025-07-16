#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool isPerfectSquare(int);
int reverseDigits(int);
int calculateSum(int);

int main() {

    int number;
    scanf("%d", &number);

    printf("Is perfect square? %s\n", isPerfectSquare(number) ? "Yes" : "No");
    printf("Reversed digits: %d\n", reverseDigits(number));
    printf("Sum of digits: %d\n", calculateSum(number));

    return 0;
}

bool isPerfectSquare(int num) {

    if (num < 0) return false;

    for (int i = 1; i * i <= num; i++) {
        if (i * i == num)
            return true;
    }
    return false;
}

int reverseDigits(int num) {

    int reversed = 0;

    while (num != 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return reversed;
}

int calculateSum(int num) {

    int sum = 0;

    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}
