#include <stdio.h>
#include <ctype.h>
#include <limits.h>

int myAtoi(char *s) {
    int i = 0;
    int sign = 1;
    long result = 0;
    while (s[i] == ' ') {
        i++;
    }
    if (s[i] == '+' || s[i] == '-') {
        if (s[i] == '-') {
            sign = -1;
        }
        i++;
    }

    while (isdigit(s[i])) {
        result = result * 10 + (s[i] - '0');

        if (result * sign >= INT_MAX) return INT_MAX;
        if (result * sign <= INT_MIN) return INT_MIN;

        i++;
    }
    return (int)(result * sign);
}
int main() {
    char *tests[] = {
        "42",
        "   -042",
        "1337cod3",
        "0-1",
        "words and 987"
    };
    for (int i = 0; i < 5; i++) {
        printf("Input: \"%s\" → Output: %d\n", tests[i], myAtoi(tests[i]));
    }

    return 0;
}
/* This program solves the problem of converting a string into an integer The input string may contain spaces, an optional sign (+ or -), and digits. The task is to
extract the integer from the beginning of the string and stop as soon as a non-digit character appears.

The solution starts by skipping any leading spaces. Then, it checks if the first non-space character is a + or - to determine the number's sign. After that,
it reads each digit one by one and builds the number. If a non-digit character appears, the conversion stops. If the number goes beyond the 32-bit signed integer range, 
  it is clamped to the maximum or minimum allowed value.*/
