#include <stdio.h>

int main() {
    int eng, maths, physics, chemistry, cs;
    scanf("%d %d %d %d %d", &eng, &maths, &physics, &chemistry, &cs);

    // Check if all marks are greater than 34
    if (eng > 34 && maths > 34 && physics > 34 && chemistry > 34 && cs > 34) {
        printf("PASSED\n");
    } else {
        printf("FAILED\n");
    }

    return 0;
}

