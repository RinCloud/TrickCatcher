#include <iostream>
#include <string>

using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    
    int count = 0;
    int i = 0;
    int j = 0;
    
    while (i < s.length()) {
        if (s[i] == t[j]) {
            j++;
            
            if (j == t.length()) {
                j = 0;
                count++;
            }
        }
        
        i++;
    }
    
    if (j == 0) {
        cout << count << endl;
    }
    else {
        cout << -1 << endl;
    }
    
    return 0;
}