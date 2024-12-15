#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> correct(N + 1, 0);
    vector<int> penalties(N + 1, 0);
    unordered_set<int> solved;

    for (int i = 0; i < M; i++) {
        int p;
        string S;
        cin >> p >> S;

        if (S == "AC") {
            if (solved.find(p) == solved.end()) {
                solved.insert(p);
                correct[p]++;
            }
        } else {
            if (solved.find(p) == solved.end()) {
                penalties[p]++;
            }
        }
    }

    int num_correct = 0;
    int num_penalties = 0;

    for (int i = 1; i <= N; i++) {
        if (solved.find(i) != solved.end()) {
            num_correct++;
            num_penalties += penalties[i];
        }
    }

    cout << num_correct << " " << num_penalties << endl;

    return 0;
}