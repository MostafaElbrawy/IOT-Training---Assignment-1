#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    printf("Enter a string: ");
    scanf("%s", str); 

    int maxLength = 0; 
    int start = 0;     

    for (int i = 0; str[i] != '\0'; i++) {
        int used[256] = {0};  
        int length = 0;       
        for (int j = i; str[j] != '\0'; j++) {
            if (used[(unsigned char)str[j]] == 1) {
                break;  
            } else {
                used[(unsigned char)str[j]] = 1;  
                length++; 
            }}
        if (length > maxLength) {
            maxLength = length; 
        }}
    printf("Longest substring without repeating characters = %d\n", maxLength);

    return 0;
}
/* 
This program finds the length of the longest substring in a word where no characters repeat. It takes input from the user, then checks each part of the string one by one.

For every starting letter, it looks ahead to see how many letters can be added without repeating any. It uses a simple array to remember which characters have already been seen.

If it finds a repeated character, it stops and tries the next starting position. During this process, it keeps track of the longest valid substring found.

In the end, it prints the length of that longest substring. This method is simple and easy to understand, especially for beginners.
*/
