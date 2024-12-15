#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    string S;
    cin >> S;
    
    vector<int> diffs(N + 1); // differences array
    int currentDiff = 0; // current difference
    
    // Compute differences array
    for (int i = 0; i < N; i++) {
        if (S[i] == '+') {
            currentDiff++;
        } else if (S[i] == '-') {
            currentDiff--;
        } else if (S[i] == '>') {
            diffs[i + 1] = diffs[i] + currentDiff;
        } else if (S[i] == '<') {
            diffs[i + 1] = diffs[i] - currentDiff;
        }
    }
    
    // Count pairs that create the same differences
    int answer = 0;
    vector<int> count(diffs.size(), 0); // count of differences
    
    for (int i = diffs.size() - 1; i >= 0; i--) {
        if (i + currentDiff + currentDiff >= 0 && i + currentDiff + currentDiff < diffs.size()) {
            answer += count[i + currentDiff + currentDiff];
        }
        count[i + diffs[i] + 1000000000]++; // offset by 10^9 to handle negative indices
    }
    
    cout << answer << endl;
    
    return 0;
}