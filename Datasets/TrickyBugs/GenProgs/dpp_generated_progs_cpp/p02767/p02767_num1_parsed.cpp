#include <iostream>
#include <vector>
#include <cmath>
#include <numeric>

int main() {
    int N;
    std::cin >> N;
    
    std::vector<int> X(N);
    for (int i = 0; i < N; i++) {
        std::cin >> X[i];
    }
    
    int minStamina = INT_MAX;
    for (int meetingPoint = 1; meetingPoint <= 100; meetingPoint++) {
        int totalStamina = 0;
        for (int i = 0; i < N; i++) {
            int stamina = (X[i] - meetingPoint) * (X[i] - meetingPoint);
            totalStamina += stamina;
        }
        minStamina = std::min(minStamina, totalStamina);
    }
    
    std::cout << minStamina << std::endl;
    
    return 0;
}