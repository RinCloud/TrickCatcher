#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int N, M;
    std::cin >> N >> M;

    std::vector<std::vector<int>> sports_preference(N, std::vector<int>(M));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            std::cin >> sports_preference[i][j];
        }
    }

    std::vector<int> participants(M, 0);
    for (int j = 0; j < M; j++) {
        for (int i = 0; i < N; i++) {
            if (sports_preference[i][0] == j + 1) {
                participants[j]++;
                break;
            }
        }
    }

    int max_participants = *std::max_element(participants.begin(), participants.end());

    std::cout << max_participants << std::endl;

    return 0;
}