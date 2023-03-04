#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    for (int i = 1; i <= a; i++) {
        if (i % 400 == 0) {
            printf("%d ", i);
        }
        else if (i % 4 == 0 && i % 100 != 0) {
            printf("%d ", i);
        }
    }

    return 0;
}