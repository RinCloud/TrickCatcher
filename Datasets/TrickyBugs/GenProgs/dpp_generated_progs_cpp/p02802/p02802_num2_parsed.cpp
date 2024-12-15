#include <iostream>
#include <vector>
#include <string>
#include <map>

int main() {
    int N, M;
    std::cin >> N >> M;
    
    std::vector<int> correct_answers(N, 0);
    std::vector<int> penalties(N, 0);
    std::map<int, bool> solved;
    
    for (int i = 0; i < M; i++) {
        int p;
        std::string S;
        std::cin >> p >> S;
        
        if (S == "AC") {
            if (!solved[p]) {
                correct_answers[p - 1]++;
                penalties[p - 1] += penalties[p - 1];
                solved[p] = true;
            }
        } else {
            if (!solved[p]) {
                penalties[p - 1]++;
            }
        }
    }
    
    int total_correct = 0;
    int total_penalties = 0;
    
    for (int i = 0; i < N; i++) {
        total_correct += correct_answers[i];
        total_penalties += penalties[i];
    }
    
    std::cout << total_correct << " " << total_penalties << std::endl;
    
    return 0;
}