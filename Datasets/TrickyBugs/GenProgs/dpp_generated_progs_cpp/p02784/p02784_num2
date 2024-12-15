#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main() {
    int H, N;
    cin >> H >> N;
    
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    unordered_set<int> usedMoves;
    bool canWin = true;
    for (int i = 0; i < N; i++) {
        int move = A[i];
        if (usedMoves.count(move)) {
            canWin = false;
            break;
        }
        usedMoves.insert(move);
        H -= move;
        if (H <= 0) {
            break;
        }
    }
    
    if (canWin) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}