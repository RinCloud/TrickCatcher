#include <iostream>
using namespace std;

int main() {
    int N, X;
    cin >> N >> X;

    int m[N];
    for (int i = 0; i < N; i++) {
        cin >> m[i];
    }

    int numDoughnuts = 0;
    for (int i = 0; i < N; i++) {
        numDoughnuts += X / m[i];
    }

    cout << numDoughnuts + N << endl;

    return 0;
}