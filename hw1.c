#include <stdio.h>

int main() {
    int a, b;

    printf("Input two integers: ");
    scanf("%d %d", &a, &b);

    int and_result = a & b;
    int or_result = a | b;
    int xor_result = a ^ b;

    printf("%d & %d = %d\n", a, b, and_result);
    printf("%d | %d = %d\n", a, b, or_result);
    printf("%d ^ %d = %d\n", a, b, xor_result);

    return 0;
}