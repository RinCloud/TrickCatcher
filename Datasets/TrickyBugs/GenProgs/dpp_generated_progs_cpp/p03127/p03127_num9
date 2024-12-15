#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> monsters(N);
    for (int i = 0; i < N; i++) {
        cin >> monsters[i];
    }

    int min_health = monsters[0];
    for (int i = 1; i < N; i++) {
        min_health = min(min_health, monsters[i]);
    }

    cout << min_health << endl;

    return 0;
}