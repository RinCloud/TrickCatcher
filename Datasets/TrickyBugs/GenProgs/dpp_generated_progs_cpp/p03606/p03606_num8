#include <iostream>
#include <vector>

int main() {
    int N;
    std::cin >> N;

    std::vector<int> seatsOccupied(100001, 0);

    for (int i = 0; i < N; i++) {
        int l, r;
        std::cin >> l >> r;

        for (int seat = l; seat <= r; seat++) {
            seatsOccupied[seat]++;
        }
    }

    int totalPeople = 0;
    for (int seat = 1; seat <= 100000; seat++) {
        if (seatsOccupied[seat] > 0) {
            totalPeople++;
        }
    }

    std::cout << totalPeople << std::endl;

    return 0;
}