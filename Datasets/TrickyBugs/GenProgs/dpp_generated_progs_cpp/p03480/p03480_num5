#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string S;
    cin >> S;
    int length = S.length();
    int count = 0;
    int i = 0;
    
    while (i < length) {
        int j = i;
        while (j < length && S[j] == S[i]) {
            j++;
        }
        count = max(count, j - i);
        i = j;
    }
    
    cout << count << endl;
    
    return 0;
}