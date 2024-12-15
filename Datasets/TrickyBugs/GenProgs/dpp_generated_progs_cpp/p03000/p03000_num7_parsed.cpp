#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, X;
    cin >> N >> X;

    vector<int> L(N);
    for (int i = 0; i < N; i++) {
        cin >> L[i];
    }

    int bounceCount = 1;
    int coordinate = 0;

    for (int i = 0; i < N; i++) {
        coordinate += L[i];
        if (coordinate <= X) {
            bounceCount++;
        }
    }

    cout << bounceCount << endl;

    return 0;
}