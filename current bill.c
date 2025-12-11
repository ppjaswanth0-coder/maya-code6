#include <stdio.h>

int main() {
    int units;
    double bill;

    // Take input for units consumed
    scanf("%d", &units);

    // Calculate bill based on unit slabs
    if(units < 0 || units > 10000) {
        printf("Invalid input\n");
        return 0;
    }

    if(units < 200) {
        bill = units * 1.20;
    }
    else if(units < 400) {
        bill = units * 1.50;
    }
    else if(units < 600) {
        bill = units * 1.80;
    }
    else {
        bill = units * 2.00;
    }

    // Apply surcharge
    if(bill > 400) {
        bill = bill + (bill * 0.15); // 15% surcharge
    } else {
        bill = bill + 100; // Minimum surcharge Rs. 100
    }

    // Display the total bill
    printf("%.2lf\n", bill);

    return 0;
}

