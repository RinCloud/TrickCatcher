#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<string> headlines(n);
    for (int i = 0; i < n; i++) {
        cin >> headlines[i];
    }
    
    vector<vector<int>> counts(n, vector<int>(26, 0));
    for (int i = 0; i < n; i++) {
        for (char c : headlines[i]) {
            counts[i][c - 'a']++;
        }
    }
    
    string result = "";
    for (int i = 0; i < 26; i++) {
        int minCount = counts[0][i];
        for (int j = 1; j < n; j++) {
            minCount = min(minCount, counts[j][i]);
        }
        result += string(minCount, 'a' + i);
    }
    
    cout << result << endl;
    
    return 0;
}