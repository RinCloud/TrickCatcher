#include <iostream>
#include <vector>

using namespace std;

bool isDivisible(vector<int>& s, int start, int end, int p) {
    int num = 0;
    for (int i = start; i < end; i++) {
        num = (num * 10 + s[i]) % p;
    }
    return num == 0;
}

int countDivisibleSubstrings(int n, int p, vector<int>& s) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j <= n; j++) {
            if (isDivisible(s, i, j, p)) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    int n, p;
    cin >> n >> p;
    
    vector<int> s(n);
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    
    int result = countDivisibleSubstrings(n, p, s);
    cout << result << endl;
    
    return 0;
}