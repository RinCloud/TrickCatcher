#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int N;
    std::cin >> N;

    std::vector<std::pair<int, int>> jobs(N);
    for (int i = 0; i < N; i++) {
        std::cin >> jobs[i].first >> jobs[i].second;
    }

    std::sort(jobs.begin(), jobs.end(), [](const auto& a, const auto& b) {
        return a.second < b.second;
    });

    long long total_time = 0;
    for (int i = 0; i < N; i++) {
        total_time += jobs[i].first;
        if (total_time > jobs[i].second) {
            std::cout << "No" << std::endl;
            return 0;
        }
    }

    std::cout << "Yes" << std::endl;

    return 0;
}