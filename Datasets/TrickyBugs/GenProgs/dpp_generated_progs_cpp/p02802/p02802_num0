#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<int> correct(N, 0);
    vector<int> penalty(N, 0);
    unordered_set<int> ac_problems;
    
    for (int i = 0; i < M; i++) {
        int problem;
        string verdict;
        cin >> problem >> verdict;
        
        if (verdict == "AC") {
            if (ac_problems.find(problem) == ac_problems.end()) {
                ac_problems.insert(problem);
                correct[problem - 1]++;
                penalty[problem - 1] += penalty[problem - 1];
            }
        } else {
            penalty[problem - 1]++;
        }
    }
    
    int num_correct_answers = 0;
    int total_penalties = 0;
    
    for (int i = 0; i < N; i++) {
        if (correct[i] > 0) {
            num_correct_answers++;
            total_penalties += penalty[i];
        }
    }
    
    cout << num_correct_answers << " " << total_penalties << endl;
    
    return 0;
}