#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<pair<int, int>> rolls(N);
    for (int i = 0; i < N; i++) {
        cin >> rolls[i].first >> rolls[i].second;
    }
    
    for (int i = 0; i < N - 2; i++) {
        if (rolls[i].first == rolls[i].second && rolls[i + 1].first == rolls[i + 1].second && rolls[i + 2].first == rolls[i + 2].second) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    
    cout << "No" << endl;
    return 0;
}