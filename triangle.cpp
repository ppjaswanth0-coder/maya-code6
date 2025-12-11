#include <stdio.h>

int main() {
    int a, b, c;

    // Input three sides of the triangle
    scanf("%d %d %d", &a, &b, &c);

    // Check for a valid triangle first
    if(a + b > c && a + c > b && b + c > a) {
        // Check type of triangle
        if(a == b && b == c) {
            printf("Equilateral triangle\n");
        }
        else if(a == b || b == c || a == c) {
            printf("Isosceles triangle\n");
        }
        else {
            printf("Scalene triangle\n");
        }
    } else {
        printf("Not a valid triangle\n");
    }

    return 0;
}

