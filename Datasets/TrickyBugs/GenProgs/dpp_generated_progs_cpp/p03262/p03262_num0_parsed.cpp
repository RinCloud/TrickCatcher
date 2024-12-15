#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, X;
    cin >> N >> X;
    vector<int> cities(N);
    for (int i = 0; i < N; i++) {
        cin >> cities[i];
    }
    int max_D = 0;
    for (int i = 0; i < N; i++) {
        max_D = max(max_D, abs(X - cities[i]));
    }
    cout << max_D << endl;
    return 0;
}