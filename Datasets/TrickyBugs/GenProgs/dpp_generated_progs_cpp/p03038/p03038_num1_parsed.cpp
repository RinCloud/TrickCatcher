#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<int> cards(N);
    for (int i = 0; i < N; i++) {
        cin >> cards[i];
    }
    
    vector<pair<int, int>> operations(M);
    for (int i = 0; i < M; i++) {
        cin >> operations[i].first >> operations[i].second;
    }
    
    sort(operations.rbegin(), operations.rend());
    
    for (int i = 0; i < M; i++) {
        int numCards = operations[i].first;
        int newValue = operations[i].second;
        
        for (int j = 0; j < min(N, numCards); j++) {
            if (cards[j] < newValue) {
                cards[j] = newValue;
            } else {
                break;
            }
        }
    }
    
    long long sum = 0;
    for (int i = 0; i < N; i++) {
        sum += cards[i];
    }
    
    cout << sum << endl;
    
    return 0;
}