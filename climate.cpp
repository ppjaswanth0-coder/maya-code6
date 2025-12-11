#include <stdio.h>

int main() {
    int temperature;

    // Take input
    scanf("%d", &temperature);

    // Check if temperature is HOT or COLD
    if(temperature > 20) {
        printf("HOT\n");
    } else {
        printf("COLD\n");
    }

    return 0;
}

