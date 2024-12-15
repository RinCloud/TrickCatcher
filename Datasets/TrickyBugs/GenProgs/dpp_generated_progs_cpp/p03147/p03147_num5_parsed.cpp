#include <iostream>
#include <vector>

int main() {
    int N;
    std::cin >> N;

    std::vector<int> h(N);
    for (int i = 0; i < N; i++) {
        std::cin >> h[i];
    }


    int operations = 0;
    for (int i = 0; i < N - 1; i++) {
        if (h[i] < h[i + 1]) {
            operations += h[i + 1] - h[i];
        }
    }
    
    std::cout << operations << std::endl;

    return 0;
}