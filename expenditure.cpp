#include <stdio.h>

int main() {
    int X, Y;

    // Input total money and daily expenditure
    scanf("%d", &X);
    scanf("%d", &Y);

    // Check if he has enough money
    if(X >= 30 * Y) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}

