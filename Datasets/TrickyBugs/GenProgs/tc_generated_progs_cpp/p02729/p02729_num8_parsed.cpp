#include <iostream>

int main() {
    int n, m, a = 0;
    std::cin >> n >> m;
    a += (n * (n - 1)) / 2;
    a += (m * (m - 1)) / 2;
    std::cout << a << std::endl;
    return 0;
}
