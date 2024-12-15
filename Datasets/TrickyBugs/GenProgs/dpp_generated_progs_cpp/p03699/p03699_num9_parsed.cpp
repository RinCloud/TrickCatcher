#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> scores(N);
    for (int i = 0; i < N; i++) {
        cin >> scores[i];
    }
    
    sort(scores.begin(), scores.end(), greater<int>());
    
    int total = 0;
    for (int i = 0; i < N; i++) {
        total += scores[i];
    }
    
    if (total % 10 == 0) {
        for (int i = 0; i < N; i++) {
            if (scores[i] % 10 != 0) {
                total -= scores[i];
                break;
            }
        }
    }
    
    cout << total << endl;
    
    return 0;
}