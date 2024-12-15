#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<int> votes(N);
    for(int i = 0; i < N; i++) {
        cin >> votes[i];
    }
    
    sort(votes.begin(), votes.end(), greater<int>());
    
    int totalVotes = 0;
    for(int i = 0; i < M; i++) {
        totalVotes += votes[i];
    }
    
    int minVotes = votes[M-1] * 4 * M;
    
    if(totalVotes >= minVotes) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}