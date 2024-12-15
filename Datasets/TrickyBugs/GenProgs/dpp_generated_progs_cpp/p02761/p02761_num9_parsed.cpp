#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isValid(int num, vector<pair<int, int>>& conditions) {
    string str = to_string(num);
    
    for (auto& condition : conditions) {
        int s = condition.first;
        int c = condition.second;
        if (s > str.size() || str[str.size()-s] != '0' + c) {
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
    
    int minNum = pow(10, N-1);
    int maxNum = pow(10, N);
    
    for (int num = minNum; num < maxNum; num++) {
        if (isValid(num, conditions)) {
            cout << num << endl;
            return 0;
        }
    }
    
    cout << -1 << endl;
    return 0;
}