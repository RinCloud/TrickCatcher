#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    map<int, int> correct;
    map<int, int> wrong;

    for (int i = 0; i < M; i++) {
        int p;
        string verdict;
        cin >> p >> verdict;

        if (verdict == "AC") {
            correct[p]++;
        } else {
            if (correct[p] == 0) {
                wrong[p]++;
            }
        }
    }

    int numCorrect = 0;
    int numPenalties = 0;

    for (auto it = correct.begin(); it != correct.end(); it++) {
        int p = it->first;

        numCorrect++;
        numPenalties += wrong[p];
    }

    cout << numCorrect << " " << numPenalties << endl;

    return 0;
}