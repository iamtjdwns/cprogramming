#include <stdio.h>

int main() {
    float km, miles;

    printf("km�� �Է��ϼ���: ");
    scanf("%f", &km);

    miles = km / 1.609;

    printf("%.1f miles\n", miles);

    return 0;
}