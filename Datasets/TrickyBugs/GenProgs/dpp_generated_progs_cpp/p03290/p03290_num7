#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int D, G;
    std::cin >> D >> G;
    
    std::vector<int> p(D), c(D);
    for (int i = 0; i < D; i++) {
        std::cin >> p[i] >> c[i];
    }
    
    int minProblems = std::numeric_limits<int>::max();
    
    for (int mask = 0; mask < (1 << D); mask++) {
        int solvedProblems = 0;
        int score = 0;
        int maxUnsolved = -1;
        
        for (int i = 0; i < D; i++) {
            if (mask & (1 << i)) {
                solvedProblems += p[i];
                score += 100 * (i+1) * p[i] + c[i];
            } else {
                maxUnsolved = i;
            }
        }
        
        if (score >= G) {
            minProblems = std::min(minProblems, solvedProblems);
        } else {
            int remainingScore = G - score;
            int problemsNeeded = (remainingScore + maxUnsolved * 100 - 1) / (maxUnsolved * 100);
            
            if (problemsNeeded >= p[maxUnsolved]) {
                continue;
            }
            
            minProblems = std::min(minProblems, solvedProblems + problemsNeeded);
        }
    }
    
    std::cout << minProblems << std::endl;
    
    return 0;
}