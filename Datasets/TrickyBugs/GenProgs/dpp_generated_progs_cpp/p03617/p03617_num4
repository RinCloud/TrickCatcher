#include <iostream>

int main() {
    int Q, H, S, D, N;
    std::cin >> Q >> H >> S >> D >> N;
    
    // Calculate the cost of each bottle
    int cost_025 = Q * 4;
    int cost_05 = H * 2;
    int cost_1 = S;
    int cost_2 = D / 2;
    
    // Calculate the total cost
    int total_cost = 0;

    // Check if it's more cost-effective to buy 2-liter bottles
    if (cost_2 < cost_1 && cost_2 < cost_05 && cost_2 < cost_025) {
        total_cost += (N / 2) * D;
        N %= 2;
    }
    
    // Check if it's more cost-effective to buy 1-liter bottles
    if (cost_1 < cost_05 && cost_1 < cost_025) {
        total_cost += (N / 1) * S;
        N %= 1;
    }
    
    // Check if it's more cost-effective to buy 0.5-liter bottles
    if (cost_05 < cost_025) {
        total_cost += (N / 0.5) * H;
        N %= 0.5;
    }
    
    // Buy the remaining 0.25-liter bottles
    total_cost += N * Q;
    
    // Print the total cost
    std::cout << total_cost << std::endl;
    
    return 0;
}