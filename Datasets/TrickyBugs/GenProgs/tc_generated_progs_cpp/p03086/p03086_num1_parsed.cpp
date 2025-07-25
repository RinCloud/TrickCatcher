#include <stdio.h>

int main() {
    int a = 0;
    int i;
    int sum = 0;
    char s[11];

    scanf("%s", s);

    // Iterate over each character in the string
    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] == 'A' || s[i] == 'T' || s[i] == 'G' || s[i] == 'C') {
            // If the current character is A, T, G or C, add 1 to "a"
            a++;
        } else {
            // If the current character is not A, T, G or C, reset "a" to 0
            a = 0;
        }
        // If the current length of ACGT string is larger than "sum", update "sum"
        if (a > sum) {
            sum = a;
        }
    }

    printf("%d\n", sum);
    return 0;
}
