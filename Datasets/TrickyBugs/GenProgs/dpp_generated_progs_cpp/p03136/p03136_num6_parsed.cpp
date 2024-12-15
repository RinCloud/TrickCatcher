#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> sides(N);
    for (int i = 0; i < N; i++) {
        cin >> sides[i];
    }

    sort(sides.begin(), sides.end());

    int longestSide = sides[N-1];
    int sumOfOthers = 0;
    for (int i = 0; i < N-1; i++) {
        sumOfOthers += sides[i];
    }

    if (longestSide < sumOfOthers) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}