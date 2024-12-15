#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
    int N, M;
    cin >> N;
    unordered_map<string, int> blue_map;
    for (int i = 0; i < N; i++) {
        string card;
        cin >> card;
        blue_map[card]++;
    }
    cin >> M;
    unordered_map<string, int> red_map;
    for (int i = 0; i < M; i++) {
        string card;
        cin >> card;
        red_map[card]++;
    }
    int max_balance = 0;
    for (auto it : blue_map) {
        int balance = it.second - red_map[it.first];
        max_balance = max(max_balance, balance);
    }
    cout << max_balance << endl;
    return 0;
}