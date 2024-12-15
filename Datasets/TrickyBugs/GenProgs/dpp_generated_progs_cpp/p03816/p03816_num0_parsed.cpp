#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    int N;
    cin >> N;

    map<int, int> freq;
    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        freq[num]++;
    }

    int maxRemaining = 0;
    for (auto it = freq.begin(); it != freq.end(); it++) {
        int count = it->second;
        maxRemaining += min(count, 2);
    }
    cout << maxRemaining << endl;

    return 0;
}