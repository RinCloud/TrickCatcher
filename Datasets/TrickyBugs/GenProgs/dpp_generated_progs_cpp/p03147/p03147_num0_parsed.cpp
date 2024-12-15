#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> heights(N);
    for (int i = 0; i < N; i++) {
        cin >> heights[i];
    }

    int operations = 0;
    for (int i = 1; i < N; i++) {
        if (heights[i] > heights[i - 1]) {
            operations += heights[i] - heights[i - 1];
        }
    }

    cout << operations << endl;

    return 0;
}