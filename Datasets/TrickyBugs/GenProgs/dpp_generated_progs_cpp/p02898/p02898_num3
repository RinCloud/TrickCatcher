#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> heights(N);
    for (int i = 0; i < N; i++) {
        cin >> heights[i];
    }

    int count = 0;
    for (int i = 0; i < N; i++) {
        if (heights[i] >= K) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}