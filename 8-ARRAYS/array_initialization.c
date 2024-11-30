#include <stdio.h>

int main() {
    printf("HelloWorld!");
    return 0;
}

void snap1() {
    // Array Initialization
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
}

void snap2() {
    /* initial value of a is {1, 2, 3, 4, 5, 6, 0, 0, 0, 0} */
    int a[10] = {1, 2, 3, 4, 5, 6};
}

void snap3() {
    /* initial value of a is {0, 0, 0, 0, 0, 0, 0, 0, 0, 0} */
    int a[10] = {0};
}

void snap4() {
    /* If an initializer is present, the length of the array may be omitted */
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    /* The array still has a fixed number of length(10). */
}

void snap5() {
    /* Designated Initializers */
    /* `[4]` designator */
    int a[10] = {[4] = 2, [8] = 70, [1] = 9};

    /* deduce the length */
    /* force the array to have length 25 */
    int b[] = {[24] = 2, [18] = 70, [13] = 9};
}