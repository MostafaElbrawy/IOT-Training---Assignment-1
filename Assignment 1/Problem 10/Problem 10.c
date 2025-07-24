#include <stdio.h>
#include <string.h>
char* addBinary(char* a, char* b) {
    static char result[10005]; 
    int i = strlen(a) - 1;      
    int j = strlen(b) - 1;     
    int carry = 0;             
    int k = 0;              
    while (i >= 0 || j >= 0 || carry) {
        int bitA = 0;
        int bitB = 0;

        if (i >= 0) {
            bitA = a[i] - '0';
            i--;
        }

        if (j >= 0) {
            bitB = b[j] - '0';
            j--;
        }

        int sum = bitA + bitB + carry;

        if (sum == 0) {
            result[k] = '0';
            carry = 0;
        }
        else if (sum == 1) {
            result[k] = '1';
            carry = 0;
        }
        else if (sum == 2) {
            result[k] = '0';
            carry = 1;
        }
        else if (sum == 3) {
            result[k] = '1';
            carry = 1;
        }

        k++;
    }
    for (int x = 0; x < k / 2; x++) {
        char temp = result[x];
        result[x] = result[k - 1 - x];
        result[k - 1 - x] = temp;
    }

    result[k] = '\0'; 
    return result;
}

int main() {
    printf("Sum of 11 and 1 = %s\n", addBinary("11", "1"));         
    printf("Sum of 1010 and 1011 = %s\n", addBinary("1010", "1011")); 
    return 0;
}
