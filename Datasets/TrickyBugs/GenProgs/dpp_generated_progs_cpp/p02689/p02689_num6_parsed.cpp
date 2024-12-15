#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> H(N);
    for (int i = 0; i < N; i++) {
        cin >> H[i];
    }

    vector<int> goodObservatories(N, 1);

    for (int i = 0; i < M; i++) {
        int A, B;
        cin >> A >> B;

        if (H[A-1] <= H[B-1]) {
            goodObservatories[A - 1] = 0;
        }
        if (H[B-1] <= H[A-1]) {
            goodObservatories[B - 1] = 0;
        }
    }

    int countGoodObservatories = count(goodObservatories.begin(), goodObservatories.end(), 1);

    cout << countGoodObservatories << endl;

    return 0;
}