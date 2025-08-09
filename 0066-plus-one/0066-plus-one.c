#include <stdlib.h>

int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int* result;
    // initialize return size
    *returnSize = digitsSize;
    for (int i = digitsSize - 1; i >= 0; i--) {
        if (digits[i] < 9) {
            digits[i]++;
            return result = digits; 
        }
        digits[i] = 0;
    }
    result = (int*)malloc((digitsSize + 1) * sizeof(int));
    result[0] = 1; 
    for (int i = 0; i < digitsSize; i++) {
        result[i + 1] = digits[i]; 
    }
    *returnSize = digitsSize + 1; // update the return size
    return result; 
}
