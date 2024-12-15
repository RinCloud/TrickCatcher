#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    unordered_set<string> words;
    string prev;
    for (int i = 0; i < N; i++) {
        string word;
        cin >> word;
        
        if (i > 0 && (word[0] != prev.back() || words.count(word) > 0)) {
            cout << "No" << endl;
            return 0;
        }
        
        words.insert(word);
        prev = word;
    }
    
    cout << "Yes" << endl;
    
    return 0;
}