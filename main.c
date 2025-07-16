#include <stdio.h>
#include <math.h>
#include <stdbool.h>

double calculateCostPerInch(double, double);

int main()
{

     double d1, p1, d2, p2;

    printf("Enter diameter and price of pizza 1: ");
    scanf("%lf %lf", &d1, &p1);

    printf("Enter diameter and price of pizza 2: ");
    scanf("%lf %lf", &d2, &p2);

    double cost1 = calculateCostPerInch(d1, p1);
    double cost2 = calculateCostPerInch(d2, p2);

    printf("\nCost per sq.inch:\n");
    printf("Pizza 1: %.4f\n", cost1);
    printf("Pizza 2: %.4f\n", cost2);

    if (fabs(cost1 - cost2) < 1e-6) {
        printf("Both pizzas are the same value.\n");
    } else if (cost1 < cost2) {
        printf("Pizza 1 is the better buy.\n");
    } else {
        printf("Pizza 2 is the better buy.\n");
    }


    return 0;
}

double calculateCostPerInch(double diameter, double price) {

    double PI = 3.14159;

    double radius = diameter / 2.0;
    double area = PI * radius * radius;
    return price / area;
}

