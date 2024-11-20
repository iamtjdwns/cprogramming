#include <stdio.h>
#include <math.h>

double calculate_standard_deviation(double arr[], int n) {
    double sum = 0.0, mean, variance = 0.0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    mean = sum / n;

    for (int i = 0; i < n; i++) {
        variance += pow(arr[i] - mean, 2);
    }
    variance = variance / n;

    return sqrt(variance);
}

int main() {
    double numbers[5];

    printf("Enter 5 real numbers: ");
    for (int i = 0; i < 5; i++) {
        scanf("%lf", &numbers[i]);
    }

    double std_dev = calculate_standard_deviation(numbers, 5);

    printf("Standard Deviation = %.3f\n", std_dev);

    return 0;
}
