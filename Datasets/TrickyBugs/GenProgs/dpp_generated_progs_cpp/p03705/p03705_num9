#include <iostream>

int main() {
    int N, A, B;
    std::cin >> N >> A >> B;

    int largest_sum = A * (N - 1) + B;
    int smallest_sum = A + B * (N - 1);

    int num_possible_sums = largest_sum - smallest_sum + 1;

    if (A == B || N == 1) {
        num_possible_sums = 1;
    } else if (A > B) {
        num_possible_sums = 0;
    }

    std::cout << num_possible_sums << std::endl;

    return 0;
}