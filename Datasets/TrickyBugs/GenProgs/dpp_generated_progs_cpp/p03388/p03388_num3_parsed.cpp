#include <iostream>
#include <cmath>

int main() {
    int Q;
    std::cin >> Q;

    for (int i = 0; i < Q; i++) {
        int A, B;
        std::cin >> A >> B;

        // Calculate the maximum number of participants whose scores are smaller than Takahashi's
        long long int maxParticipants = (long long int)std::sqrt(A * B) - 1;

        std::cout << maxParticipants << std::endl;
    }

    return 0;
}
