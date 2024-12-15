#include <iostream>
#include <unordered_map>
using namespace std;

string checkBeautiful(string w) {
    unordered_map<char, int> count;
    for (int i = 0; i < w.length(); i++) {
        count[w[i]]++;
    }
    
    for (char c = 'a'; c <= 'z'; c++) {
        if (count[c] % 2 != 0) {
            return "No";
        }
    }
    return "Yes";
}

int main() {
    string w;
    cin >> w;
    
    cout << checkBeautiful(w) << endl;
    
    return 0;
}