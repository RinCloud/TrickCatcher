#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int N;
    std::cin >> N;

    std::vector<int> house_coords(N);
    for (int i = 0; i < N; i++) {
        std::cin >> house_coords[i];
    }

    std::sort(house_coords.begin(), house_coords.end());

    int min_dist = house_coords[N - 1] - house_coords[0];
    std::cout << min_dist << std::endl;

    return 0;
}