#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

bool check_conditions(int num, vector<pair<int, int>>& conditions) {
    string num_str = to_string(num);
    
    for (auto cond : conditions) {
        int pos = cond.first - 1;
        int digit = cond.second;
        
        if (num_str[pos] != to_string(digit)[0]) {
            return false;
        }
    }
    
    return true;
}

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<pair<int, int>> conditions(M);
    
    for (int i = 0; i < M; i++) {
        cin >> conditions[i].first >> conditions[i].second;
    }
    
    int lower_limit = pow(10, N - 1);
    int upper_limit = pow(10, N);
    
    for (int i = lower_limit; i < upper_limit; i++) {
        if (check_conditions(i, conditions)) {
            cout << i << endl;
            return 0;
        }
    }
    
    cout << -1 << endl;
    
    return 0;
}