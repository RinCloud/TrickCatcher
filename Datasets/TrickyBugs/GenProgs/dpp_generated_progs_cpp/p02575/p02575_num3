#include <iostream>
#include <vector>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;
    
    vector<int> A(H), B(H);
    for (int i = 0; i < H; i++) {
        cin >> A[i] >> B[i];
    }
    
    vector<int> moves(H, 0);
    moves[H-1] = 0;
    if (A[H-1] <= B[H-1]) {
        moves[H-1] = 1;
    }
    
    for (int i = H-2; i >= 0; i--) {
        if (A[i] <= B[i]) {
            moves[i] = moves[i+1] + 1;
        } else {
            moves[i] = moves[i+1];
        }
    }
    
    for (int i = 0; i < H; i++) {
        int answer = B[i] - moves[i];
        if (answer <= 0) {
            answer = -1;
        }
        cout << answer << endl;
    }
    
    return 0;
}