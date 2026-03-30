#include <string.h>
#include <stdlib.h>

char* addStrings(char* num1, char* num2) {
    int i = strlen(num1) - 1;
    int j = strlen(num2) - 1;
    int carry = 0, k = 0;

    char* res = malloc(strlen(num1) + strlen(num2) + 2);

    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;

        if (i >= 0) sum += num1[i--] - '0';
        if (j >= 0) sum += num2[j--] - '0';

        res[k++] = (sum % 10) + '0';
        carry = sum / 10;
    }

    res[k] = '\0';

    // reverse
    for (int l = 0, r = k - 1; l < r; l++, r--) {
        char t = res[l];
        res[l] = res[r];
        res[r] = t;
    }

    return res;
}
