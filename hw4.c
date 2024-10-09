#include <stdio.h>

int is_prime(int num) {
    if (num <= 1) {
        return 0; // 1 이하의 수는 소수가 아님
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // 약수가 있으면 소수가 아님
        }
    }
    return 1; // 소수임
}

int main() {
    int number;

    printf("Please enter a number: ");
    scanf("%d", &number);

    if (is_prime(number)) {
        printf("It is a prime number.\n");
    }
    else {
        printf("It is not a prime number.\n");
    }

    return 0;
}