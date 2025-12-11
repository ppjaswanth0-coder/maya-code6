#include <stdio.h>

int main() {
    int costPrice, sellingPrice;

    // Take input for cost price and selling price
    scanf("%d", &costPrice);
    scanf("%d", &sellingPrice);

    // Check profit or loss
    if(sellingPrice > costPrice) {
        printf("Profit\n");
    } 
    else if(sellingPrice < costPrice) {
        printf("Loss\n");
    } 
    else {
        printf("No Profit and No Loss\n");
    }

    return 0;
}

