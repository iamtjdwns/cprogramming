#include <stdio.h>

int main() {
    int numbers[5];  
    int i;

    printf("Please input five integers: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }

    printf("Odd numbers: ");
    for (i = 0; i < 5; i++) {
        if (numbers[i] % 2 != 0) {
            printf("%d ", numbers[i]);
        }
    }
    printf("\n");

    printf("Even numbers: ");
    for (i = 0; i < 5; i++) {
        if (numbers[i] % 2 == 0) {
            printf("%d ", numbers[i]);
        }
    }
    printf("\n");

    return 0;
}
