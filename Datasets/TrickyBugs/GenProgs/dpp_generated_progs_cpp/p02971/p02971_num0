#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> sequence(N);
    for (int i = 0; i < N; i++) {
        cin >> sequence[i];
    }

    for (int i = 0; i < N; i++) {
        int max_value = *max_element(sequence.begin(), sequence.begin() + i)
                        + *max_element(sequence.begin() + i + 1, sequence.end());
        cout << max_value << endl;
    }
    
    return 0;
}