#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> cards(3 * N);
    for (int i = 0; i < 3 * N; i++) {
        cin >> cards[i];
    }

    sort(cards.begin(), cards.end());

    int score = 0;
    for (int i = 0; i < N - 1; i++) {
        score += cards[3 * (N - 1 - i) + 1];
    }

    cout << score << endl;
    
    return 0;
}