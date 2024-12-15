#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> slimes(N);
    for (int i = 0; i < N; i++) {
        cin >> slimes[i];
    }

    int spells = 0;
    for (int i = 1; i < N; i++) {
        if (slimes[i] == slimes[i-1]) {
            slimes[i]++;
            spells++;
        }
    }
    
    cout << spells << endl;

    return 0;
}