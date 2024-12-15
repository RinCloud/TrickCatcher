#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, X;
    cin >> N >> X;

    vector<int> m(N);
    for (int i = 0; i < N; i++) {
        cin >> m[i];
    }

    sort(m.begin(), m.end());

    int doughnuts = N;
    int remainingMoto = X;
    for (int i = 0; i < N; i++) {
        if (m[i] <= remainingMoto)  {
            doughnuts += 1;
            remainingMoto -= m[i];
        } else {
            break;
        }
    }

    cout << doughnuts << endl;

    return 0;
}