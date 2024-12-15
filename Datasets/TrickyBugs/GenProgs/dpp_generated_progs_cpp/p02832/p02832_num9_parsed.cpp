#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> bricks(N);
    for (int i = 0; i < N; i++) {
        cin >> bricks[i];
    }

    vector<int> desired(N);
    for (int i = 0; i < N; i++) {
        desired[i] = i + 1;
    }

    int bricksToRemove = 0;
    for (int i = 0; i < N; i++) {
        if (bricks[i] < desired[i]) {
            bricksToRemove++;
        }
    }

    if (bricksToRemove >= N) {
        cout << -1 << endl;
    } else {
        cout << bricksToRemove << endl;
    }

    return 0;
}