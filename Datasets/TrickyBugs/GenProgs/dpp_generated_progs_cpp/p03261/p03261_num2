#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    unordered_set<string> words;
    string prev, curr;
    bool valid = true;
    
    for (int i = 0; i < N; i++) {
        cin >> curr;
        
        if (i != 0 && (prev[prev.size() - 1] != curr[0] || words.count(curr) > 0)) {
            valid = false;
            break;
        }
        
        words.insert(curr);
        prev = curr;
    }
    
    if (valid)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    
    return 0;
}