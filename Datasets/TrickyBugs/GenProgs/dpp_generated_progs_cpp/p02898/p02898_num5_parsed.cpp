#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    int count = 0;
    vector<int> heights(N);

    for (int i = 0; i < N; i++) {
        cin >> heights[i];
        if (heights[i] >= K) {
            count++;
        }
    }

    cout << count;

    return 0;
}