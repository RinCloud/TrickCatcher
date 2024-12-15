#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    vector<int> B(M), C(M);
    for (int i = 0; i < M; i++) {
        cin >> B[i] >> C[i];
    }
    
    vector<pair<int, int>> cards(N);
    for (int i = 0; i < N; i++) {
        cards[i] = {A[i], 1};
    }
    
    for (int i = 0; i < M; i++) {
        cards.push_back({C[i], B[i]});
    }
    
    sort(cards.rbegin(), cards.rend());
    
    long long sum = 0;
    int num_cards = 0;
    for (auto card : cards) {
        int num = min(card.second, N - num_cards);
        sum += card.first * num;
        num_cards += num;
        if (num_cards == N) {
            break;
        }
    }
    
    cout << sum << endl;
    
    return 0;
}