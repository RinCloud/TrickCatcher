#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string S;
    cin >> S;
    
    int n = S.length();
    
    int num_black = count(S.begin(), S.end(), 'B');
    int num_white = count(S.begin(), S.end(), 'W');
    
    if (num_black == 0 || num_white == 0) {
        cout << 0 << endl;
    } else if (S[0] == S[n-1]) {
        cout << 1 << endl;
    } else {
        int min_stones = min(num_black, num_white);
        cout << min_stones << endl;
    }
    
    return 0;
}