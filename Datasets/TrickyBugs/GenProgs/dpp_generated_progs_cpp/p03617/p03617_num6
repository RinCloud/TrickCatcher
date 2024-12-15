#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int Q, H, S, D, N;
    cin >> Q >> H >> S >> D >> N;

    // Calculate cost per liter for each bottle size
    int cost_250ml = 4 * Q;
    int cost_500ml = 2 * H;
    int cost_1l = S;
    int cost_2l = D / 2;

    // Calculate cost for buying N liters of ice tea
    int total_cost = 0;
    int remaining_liters = N;

    // Buy the cheapest bottle size until remaining liters become 0
    while (remaining_liters > 0) {
        if (remaining_liters >= 2 && cost_2l < cost_250ml && cost_2l < cost_500ml && cost_2l < cost_1l) {
            total_cost += cost_2l;
            remaining_liters -= 2;
        } else if (remaining_liters >= 1 && cost_1l < cost_250ml && cost_1l < cost_500ml) {
            total_cost += cost_1l;
            remaining_liters -= 1;
        } else if (remaining_liters >= 0.5 && cost_500ml < cost_250ml) {
            total_cost += cost_500ml;
            remaining_liters -= 0.5;
        } else {
            total_cost += cost_250ml;
            remaining_liters -= 0.25;
        }
    }

    cout << total_cost << endl;

    return 0;
}