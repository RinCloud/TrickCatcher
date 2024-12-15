#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    int minOperations = INT_MAX;
    for(int i=0; i<s.length()-1; i++) {
        string t = s;
        int operations = 0;
        while(t.length() > 1) {
            bool changed = false;
            for(int j=0; j<t.length()-1; j++) {
                if(t[j] != t[j+1]) {
                    t.erase(j, 2);
                    changed = true;
                    operations++;
                    break;
                }
            }
            if(!changed) {
                break;
            }
        }
        minOperations = min(minOperations, operations);
    }
    
    cout << minOperations << endl;
    
    return 0;
}