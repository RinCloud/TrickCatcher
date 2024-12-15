#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    int N;
    string S;
    cin >> N >> S;
    
    map<int, vector<int>> indices;
    indices[0].push_back(-1);
    int P = 0;
    for (int i = 0; i < N; i++) {
        if (S[i] == '+') {
            P++;
        } else if (S[i] == '-') {
            P--;
        } else if (S[i] == '>') {
            P++;
        } else if (S[i] == '<') {
            P--;
        }
        indices[P].push_back(i);
    }
    
    long long ans = 0;
    for (auto& p : indices) {
        int key = p.first;
        int val_size = p.second.size();
        ans += (long long)val_size * (val_size - 1) / 2;
    }
    
    cout << ans << endl;

    return 0;
}