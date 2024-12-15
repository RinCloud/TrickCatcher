#include <iostream>
#include <vector>
#include <algorithm>

long long calculateScore(long long rank1, long long rank2) {
    return rank1 * rank2;
}

int main() {
    int Q;
    std::cin >> Q;
    
    std::vector<std::pair<long long, long long>> queries(Q);
    for (int i = 0; i < Q; i++) {
        std::cin >> queries[i].first >> queries[i].second;
    }
    
    std::vector<long long> scores(Q);
    for (int i = 0; i < Q; i++) {
        scores[i] = calculateScore(queries[i].first, queries[i].second);
    }
    
    std::sort(scores.begin(), scores.end());
    
    for (int i = 0; i < Q; i++) {
        int count = 0;
        for (int j = 0; j < Q; j++) {
            if (scores[j] < scores[i]) {
                count++;
            }
        }
        std::cout << count << std::endl;
    }
    
    return 0;
}