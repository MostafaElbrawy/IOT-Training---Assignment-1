#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool isPalindrome(char str[]);

int main()
{

    char str[] = "";

    scanf("%sa", str);

    printf("%s" ,isPalindrome(str)? "Palindrome" : "not Plindrome");

    return 0;
}

bool isPalindrome(char str[]) {

    int i = 0;
    int j = strlen(str) - 1;

    while (i < j) {
        if (str[i] != str[j]) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

