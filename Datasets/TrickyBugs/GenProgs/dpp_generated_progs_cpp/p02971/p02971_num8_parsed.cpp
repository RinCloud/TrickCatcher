#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> sequence(N);
    for (int i = 0; i < N; i++) {
        cin >> sequence[i];
    }

    int max_value = *max_element(sequence.begin(), sequence.end());

    for (int i = 0; i < N; i++) {
        int ans = max_value;
        if (sequence[i] == max_value) {
            ans = *max_element(sequence.begin(), sequence.begin() + i);
            ans = max(ans, *max_element(sequence.begin() + i + 1, sequence.end()));
        }
        cout << ans << endl;
    }

    return 0;
}