#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    string s;
    cin >> s;
    unordered_map<char, int> count;
    
    for(int i=0; i<s.length(); i++) {
        count[s[i]]++;
    }
    
    if(count['N'] == count['S'] && count['E'] == count['W']) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}