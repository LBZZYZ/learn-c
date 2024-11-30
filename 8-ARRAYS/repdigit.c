#include <stdio.h>

int main() {
    int digit;
    printf("Enter a number: ");
    scanf("%d", &digit);

    int a[10] = {0};

    int i = 1;
    int space = 10;
    while ((digit / i) != 0) {
        int val = (digit % (i * space)) / i;
        if (a[val] == 1) {
            printf("Repeated digit\n");
            return 0;
        }
        a[val] = 1;
        i *= space;
    }
    printf("No repeated digit\n");

    return 0;
}