#include <cstdio>

int main() {
    char a, b;
    scanf("%c %c", &a, &b);

    if (a == 'H' && b == 'H') {
        printf("H");
    } else {
        printf("D");
    }
}
