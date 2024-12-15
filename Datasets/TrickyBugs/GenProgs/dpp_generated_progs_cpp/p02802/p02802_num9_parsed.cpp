#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

int main() {
    int N, M;
    std::cin >> N >> M;

    std::unordered_map<int, std::pair<int, int>> problems; // {problem, {submissions, penalties}}
    int correct = 0;
    int penalties = 0;

    for (int i = 0; i < M; ++i) {
        int p;
        std::string S;
        std::cin >> p >> S;

        if (S == "AC") {
            if (problems.find(p) == problems.end()) {
                problems[p] = {1, 0};
                ++correct;
            }

            penalties += problems[p].second;
        } else {
            if (problems.find(p) == problems.end()) {
                problems[p] = {0, 0};
            }

            ++problems[p].second;
        }
    }

    std::cout << correct << " " << penalties << std::endl;

    return 0;
}