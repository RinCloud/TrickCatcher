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

    vector<int> stools(N, 0);
    int tallest = 0;

    for (int i = 0; i < N; i++) {
        if (heights[i] > tallest) {
            stools[i] = heights[i] - tallest;
            tallest = heights[i];
        }
    }

    int total_height = 0;
    for (int i = 0; i < N; i++) {
        total_height += stools[i];
    }

    cout << total_height << endl;

    return 0;
}