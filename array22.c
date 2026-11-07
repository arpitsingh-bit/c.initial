#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("Enter the number of terms in the array: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("The number of terms must be positive.\n");
        return 1;
    }

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Enter number %d in the array: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Your numbers in the array are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    double mean = (double)sum / n;
    printf("Sum of all terms in the array is %d\n", sum);
    printf("Mean value of the array is %.2f\n", mean);

    double variance = 0.0;
    for (int i = 0; i < n; i++) {
        double difference = arr[i] - mean;
        variance += difference * difference;
    }
    variance /= n;
    printf("Variance of the numbers in the array is %.2f\n", variance);
    printf("Standard deviation of the array is %.2f\n", sqrt(variance));
    return 0;

}