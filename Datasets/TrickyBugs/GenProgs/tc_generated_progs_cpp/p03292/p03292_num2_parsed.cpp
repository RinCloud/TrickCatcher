#include<iostream>
#include<cmath>
int main() {
    int A, B, C;
    std::cin >> A >> B >> C;
    int cost1 = std::abs(A - B);
    int cost2 = std::abs(B - C);
    int cost3 = std::abs(A - C);
    int minCost = std::min({ cost1, cost2, cost3 });
    std::cout << minCost;
    return 0;
}