#include <stdio.h>

int main() {
    int num1, num2;

    printf("Input two integers: ");
    scanf("%d %d", &num1, &num2);

    int and_result = num1 & num2;
    int or_result = num1 | num2;
    int xor_result = num1 ^ num2;

    printf("%d & %d = %d\n", num1, num2, and_result);
    printf("%d | %d = %d\n", num1, num2, or_result);
    printf("%d ^ %d = %d\n", num1, num2, xor_result);

    return 0;
}