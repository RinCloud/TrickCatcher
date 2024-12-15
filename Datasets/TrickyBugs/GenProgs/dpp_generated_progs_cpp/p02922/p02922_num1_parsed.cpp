#include <iostream>

int main() {
    int A, B;
    std::cin >> A >> B;

    int strips = 0;
    int sockets = 1; // Initial socket in Takahashi's house

    while (sockets < B) {
        sockets += (A - 1); // Extend one socket to A sockets using one power strip
        strips++;
    }

    std::cout << strips << std::endl;

    return 0;
}