#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int H, N;
    cin >> H >> N;
    
    vector<int> moves(N);
    for (int i = 0; i < N; i++) {
        cin >> moves[i];
    }
    
    sort(moves.begin(), moves.end(), greater<int>());
    
    int current_health = H;
    
    // Check if the sum of all moves is greater than or equal to current_health
    int total_sum = 0;
    for (int i = 0; i < N; i++) {
        total_sum += moves[i];
    }
    
    if (total_sum >= current_health) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}