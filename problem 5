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