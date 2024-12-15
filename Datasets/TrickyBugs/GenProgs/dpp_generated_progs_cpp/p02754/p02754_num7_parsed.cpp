#include <iostream>

int main() {
    long long N, A, B;
    std::cin >> N >> A >> B;

    long long blue_balls = 0;
    long long i = 0;

    while (i < N) {
        if ((i + 1) % (A + B) <= A) {
            blue_balls++;
        }
        i++;
    }

    std::cout << blue_balls << std::endl;

    return 0;
}