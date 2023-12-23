#include <stdio.h>
#include <stdlib.h>

void incrementOne(int* digits, int size, int* returnSize) {
    int carry = 1,i,sum;

    for (i = size - 1; i >= 0; i--) {
        sum = digits[i] + carry;
        digits[i] = sum % 10;
        carry = sum / 10;
    }

    if (carry > 0) {
        digits = realloc(digits, (size + 1) * sizeof(int));
        digits[0] = carry;
        size++;
    }

    *returnSize = size;
}

int main() {
    int digits[] = {9,8};
    int size = sizeof(digits) / sizeof(digits[0]);
    int returnSize,i;

    incrementOne(digits, size, &returnSize);

    printf("Result: [");
    for (i = 0; i < returnSize; i++) {
        printf("%d", digits[i]);
        if (i < returnSize - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    free(digits);

    return 0;
}

