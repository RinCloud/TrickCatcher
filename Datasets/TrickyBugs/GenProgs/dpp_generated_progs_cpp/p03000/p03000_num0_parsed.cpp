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

    int count = 1;
    int distance = 0;
    for (int i = 0; i < N; i++) {
        distance += L[i];
        if (distance <= X) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}