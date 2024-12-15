#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

long long calculate_energy(std::vector<long long>& trash_positions, long long X) {
    std::vector<long long> energy(trash_positions.size());
    
    long long min_energy = std::abs(trash_positions[0]);
    energy[0] = trash_positions[0] * X;
    
    for (int i = 1; i < trash_positions.size(); i++) {
        energy[i] = energy[i-1] + X * (trash_positions[i] - trash_positions[i-1]);
        min_energy += energy[i];
    }
    
    for (int k = 1; k < trash_positions.size(); k++) {
        min_energy = std::min(min_energy, energy[k] + X * (k+1) * (k+1));
    }
    
    return min_energy;
}

int main() {
    int N, X;
    std::cin >> N >> X;

    std::vector<long long> trash_positions(N);
    for (int i = 0; i < N; i++) {
        std::cin >> trash_positions[i];
    }

    long long min_energy = calculate_energy(trash_positions, X);
    std::cout << min_energy << std::endl;

    return 0;
}