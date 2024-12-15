#include <iostream>
#include <string>
using namespace std;

// Function to count the number of occurrences of "AC" in a given substring
int countAC(string s, int l, int r) {
    int count = 0;
    for (int i = l - 1; i < r - 1; i++) {
        if (s[i] == 'A' && s[i + 1] == 'C') {
            count++;
        }
    }
    return count;
}

int main() {
    int N, Q;
    cin >> N >> Q;
    string S;
    cin >> S;

    for (int i = 0; i < Q; i++) {
        int l, r;
        cin >> l >> r;
        int result = countAC(S, l, r);
        cout << result << "\n";
    }

    return 0;
}
