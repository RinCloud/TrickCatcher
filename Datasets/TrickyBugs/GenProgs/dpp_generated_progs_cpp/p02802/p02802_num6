#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    unordered_map<int, int> correct;
    unordered_map<int, int> penalty;
    
    for (int i = 0; i < M; i++) {
        int p;
        string S;
        cin >> p >> S;
        
        if (S == "AC") {
            correct[p] = 1;
        } else {
            if (correct[p] == 0) {
                penalty[p]++;
            }
        }
    }
    
    int numCorrect = 0;
    int numPenalty = 0;
    
    for (int i = 1; i <= N; i++) {
        if (correct[i] > 0) {
            numCorrect++;
            numPenalty += penalty[i];
        }
    }
    
    cout << numCorrect << " " << numPenalty << endl;
    
    return 0;
}