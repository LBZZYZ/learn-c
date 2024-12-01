#include <stdio.h>

#define INITIAL_VALUE 100

int main() {
    printf("Enter interest rate: ");

    float rate;
    scanf("%f", &rate);

    printf("Enter number of years: ");

    int year = 0;
    scanf("%d", &year);

    if (rate <= 0) {
        printf("Invalid rate!");
        return 0;
    }

    if (year <= 0) {
        printf("Invalid year!");
        return 0;
    }

    int i;
    float interests[5];
    printf("Years\t");
    int j = 0;
    for (j = 0; j < 5; ++j) {
        interests[j] = INITIAL_VALUE;
        printf("%.2f%%\t", rate + j);
    }
    printf("\n");

    for (i = 1; i <= year; ++i) {
        printf("%d\t", i);
        for (j = 0; j < 5; ++j) {
            interests[j] *= (1 + (rate + j) / 100);
            printf("%.2f\t", interests[j]);
        }
        printf("\n");
    }

    return 0;
}