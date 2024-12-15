#include <iostream>
#include <vector>
#include <algorithm>

const int MODULO = 998244353;

// Function to calculate the sum of f(T) over all non-empty subset T of S
int calculateSum(std::vector<int>& x, std::vector<int>& y) {
    int n = x.size();

    std::vector<int> prefix_sum_x(n);
    std::vector<int> prefix_sum_y(n);

    // Sort the points by their x-coordinates
    std::vector<int> order(n);
    for (int i = 0; i < n; i++) {
        order[i] = i;
    }
    sort(order.begin(), order.end(), [&](int a, int b) {
        return x[a] < x[b];
    });

    // Calculate prefix sums for x-coordinates and y-coordinates
    for (int i = 0; i < n; i++) {
        prefix_sum_x[i] = (x[order[i]] + (i > 0 ? prefix_sum_x[i - 1] : 0)) % MODULO;
        prefix_sum_y[i] = (y[order[i]] + (i > 0 ? prefix_sum_y[i - 1] : 0)) % MODULO;
    }

    int result = 0;
    int total = 0;

    // Calculate sum of f(T) over all non-empty subset T of S
    for (int i = 0; i < n; i++) {
        result = (result + ((prefix_sum_x[i] - (i > 0 ? prefix_sum_x[i - 1] : 0)) * (total + 1) % MODULO)) % MODULO;
        result = (result + ((prefix_sum_y[i] - (i > 0 ? prefix_sum_y[i - 1] : 0)) * (total + 1) % MODULO)) % MODULO;
        total = (total + (prefix_sum_x[i] - (i > 0 ? prefix_sum_x[i - 1] : 0)) % MODULO) % MODULO;
        total = (total + (prefix_sum_y[i] - (i > 0 ? prefix_sum_y[i - 1] : 0)) % MODULO) % MODULO;
    }

    return result;
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> x(n);
    std::vector<int> y(n);

    for (int i = 0; i < n; i++) {
        std::cin >> x[i] >> y[i];
    }

    int result = calculateSum(x, y);
    std::cout << result << std::endl;

    return 0;
}