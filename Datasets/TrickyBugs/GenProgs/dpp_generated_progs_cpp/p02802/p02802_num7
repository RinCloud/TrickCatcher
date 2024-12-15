#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    // Create map to store verdicts for each problem
    map<int, vector<string>> verdicts;
    int num_correct = 0;
    int num_penalties = 0;

    for (int i = 0; i < M; i++) {
        int p;
        string S;
        cin >> p >> S;

        // Check if problem is already solved
        if (verdicts.count(p) == 0) {
            if (S == "AC") {
                num_correct++;
                num_penalties += verdicts[p].size();
            } else {
                verdicts[p].push_back(S);
            }
        }
    }

    cout << num_correct << " " << num_penalties << endl;

    return 0;
}