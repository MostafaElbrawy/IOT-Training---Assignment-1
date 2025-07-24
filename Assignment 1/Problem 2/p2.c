#include <stdio.h>
int main() {
    double balance, interest = 0.0, totalDue, minPayment;
    char choice;

    do {
        printf("Enter your account balance: $");
        scanf("%lf", &balance);

        if (balance <= 1000) {
            interest = balance * 0.015;
        } else {
            interest = 1000 * 0.015 + (balance - 1000) * 0.01;
        }

        totalDue = balance + interest;

        if (totalDue <= 10) {
            minPayment = totalDue;
        } else {
            minPayment = totalDue * 0.10;
            if (minPayment < 10)
                minPayment = 10;
        }

        printf("\nInterest: $%.2f\n", interest);
        printf("Total Amount Due: $%.2f\n", totalDue);
        printf("Minimum Payment: $%.2f\n", minPayment);

        printf("\nDo you want to enter another balance? (Y/N):");
        scanf(" %c", &choice);

    } while (choice == 'Y' || choice == 'y');

    printf("Thank you. Goodbye!\n");

    return 0;
}
