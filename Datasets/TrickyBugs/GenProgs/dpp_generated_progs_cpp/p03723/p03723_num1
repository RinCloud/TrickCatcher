#include <iostream>

int main() {
    int A, B, C;
    std::cin >> A >> B >> C;

    int count = 0;
    while (A % 2 == 0 && B % 2 == 0 && C % 2 == 0) {
        int temp_A = A;
        int temp_B = B;
        int temp_C = C;

        A = temp_B / 2 + temp_C / 2;
        B = temp_A / 2 + temp_C / 2;
        C = temp_A / 2 + temp_B / 2;

        count++;
        if (A == temp_A && B == temp_B && C == temp_C) {
            count = -1; // infinite loop
            break;
        }
    }

    std::cout << count << std::endl;

    return 0;
}