#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    unordered_map<int, int> count;
    vector<int> slimes(N);

    for (int i = 0; i < N; i++) {
        cin >> slimes[i];
        count[slimes[i]]++;
    }
    
    int spells = 0;
    for (auto it : count) {
        if (it.second > 1) {
            spells += it.second - 1;
        }
    }

    cout << spells << endl;
    
    return 0;
}