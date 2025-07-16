#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool isPerfectSquare(int);
int reverseDigits(int);
int calculateSum(int);

int main()
{

    int num;

    scanf("%d", &num);

    printf("Is perfect square? %s\n", isPerfectSquare(num) ? "Yes" : "No");
    printf("Reversed digits: %d\n", reverseDigits(num));
    printf("Sum of digits: %d\n", calculateSum(num));

    return 0;
}

bool isPerfectSquare(int n) {

    if (n < 0) return false;

    for (int i = 1; i * i <= n; i++) {
        if (i * i == n)
            return true;
    }

    return false;
}

int reverseDigits(int num) {
    int r = 0;
    while (num != 0) {
        r = r * 10 + num % 10;
        num /= 10;
    }
    return r;
}

int calculateSum(int num) {
    int s = 0;
    while (num != 0) {
        s += num % 10;
        num /= 10;
    }
    return s;
}

