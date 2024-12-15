#include <iostream>
#include <string>

using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    
    string s_copy = s;
    while (s_copy.length() < t.length()) {
        s_copy += s;
    }
    
    string s_prime = "";
    for (int i = 0; i < 100; i++) {
        s_prime += s_copy;
    }
    
    int i = 0;
    int j = 0;
    while (i < s_prime.length() && j < t.length()) {
        if (s_prime[i] == t[j]) {
            j++;
        }
        i++;
    }
    
    if (j == t.length()) {
        int res = (i + s.length() - 1) / s.length();
        cout << res << endl;
    } else {
        cout << -1 << endl;
    }
    
    return 0;
}