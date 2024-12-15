#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool canTransform(string s, string t, int a, int b, int c, int d) {
    int n = s.size();
    int m = t.size();
    
    // if length of substring s[a:b] is not equal to length of substring t[c:d]
    if (b - a != d - c) {
        return false;
    }
    
    // if substring s[a:b] and t[c:d] contain different number of 'A's and 'B's
    int count_s_A = 0, count_s_B = 0;
    for (int i = a; i <= b; i++) {
        if (s[i] == 'A') {
            count_s_A++;
        } else {
            count_s_B++;
        }
    }
    
    int count_t_A = 0, count_t_B = 0;
    for (int i = c; i <= d; i++) {
        if (t[i] == 'A') {
            count_t_A++;
        } else {
            count_t_B++;
        }
    }
    
    if (count_s_A != count_t_A || count_s_B != count_t_B) {
        return false;
    }
    
    // check if substring s[a:b] and t[c:d] can be transformed
    // perform operations on substring s[a:b] to match t[c:d]
    string temp = s.substr(a, b - a + 1);
    
    while (temp != t.substr(c, d - c + 1)) {
        bool transformed = false;
        
        // perform operation 1
        for (int i = 0; i < temp.size(); i++) {
            if (temp[i] == 'A') {
                temp.replace(i, 1, "BB");
                transformed = true;
                break;
            } else if (temp[i] == 'B') {
                temp.replace(i, 1, "AA");
                transformed = true;
                break;
            }
        }
        
        if (transformed) {
            continue;
        }
        
        // perform operation 2
        for (int i = 0; i < temp.size() - 2; i++) {
            if (temp.substr(i, 3) == "AAA" || temp.substr(i, 3) == "BBB") {
                temp.erase(i, 3);
                transformed = true;
                break;
            }
        }
        
        if (!transformed) {
            return false;
        }
    }
    
    return true;
}

int main() {
    string s, t;
    int q;
    cin >> s >> t >> q;
    
    for (int i = 0; i < q; i++) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        
        if (canTransform(s, t, a-1, b-1, c-1, d-1)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}