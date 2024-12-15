#include <iostream>
#include <vector>

int main() {
    int N, K;
    std::cin >> N >> K;

    std::vector<int> D(K);
    for (int i = 0; i < K; ++i) {
        std::cin >> D[i];
    }

    int amount = N;
    while (true) {
        bool valid_amount = true;
        int temp_amount = amount;
        while (temp_amount > 0) {
            int digit = temp_amount % 10;
            for (int i = 0; i < K; ++i) {
                if (digit == D[i]) {
                    valid_amount = false;
                    break;
                }
            }
            temp_amount /= 10;
        }
        if (valid_amount) {
            break;
        }
        amount++;
    }

    std::cout << amount << std::endl;

    return 0;
}