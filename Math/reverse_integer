// LeetCode - Reverse Integer
// Topic: Math
// Idea: extract last digit using %10 and build the reversed number

#include <limits.h>
int reverse(int x) {
    long rev = 0;   // store reversed number
    while (x != 0) {
        int digit = x % 10;   // get last digit
        rev = rev * 10 + digit;   // add digit to reversed number
        x = x / 10;   // remove last digit
    }
    // check for overflow
    if (rev > INT_MAX || rev < INT_MIN)
        return 0;
    return (int)rev;
}
