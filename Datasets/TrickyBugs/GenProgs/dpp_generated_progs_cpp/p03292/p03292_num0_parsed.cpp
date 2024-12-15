#include <iostream>
#include <cmath>

int main() {
    int A_1, A_2, A_3;
    std::cin >> A_1 >> A_2 >> A_3;

    int cost1 = 0;
    int cost2 = std::abs(A_2 - A_1);
    int cost3 = std::abs(A_3 - A_2);

    int total_cost = cost1 + cost2 + cost3;
    std::cout << total_cost << std::endl;

    return 0;
}