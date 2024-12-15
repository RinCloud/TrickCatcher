#include <iostream>
#include <map>
using namespace std;

int main() {
    int N, M;
    cin >> N;
    map<string, int> blue;
    string s;
    for (int i = 0; i < N; i++) {
        cin >> s;
        blue[s]++;
    }
    cin >> M;
    map<string, int> red;
    for (int i = 0; i < M; i++) {
        cin >> s;
        red[s]++;
    }
    
    int max_earn = 0;
    for (auto it = blue.begin(); it != blue.end(); ++it) {
        int earn = it->second - red[it->first];
        max_earn = max(max_earn, earn);
    }
    
    cout << max_earn << endl;
    
    return 0;
}