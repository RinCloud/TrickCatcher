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
    
    unordered_set<int> moves;
    for (int i = 0; i < N; i++) {
        if (moves.count(H) > 0) {
            cout << "No" << endl;
            return 0;
        }
        moves.insert(H);
        H -= A[i];
    }
    if (moves.count(H) > 0) {
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }
    
    return 0;
}