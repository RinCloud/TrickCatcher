#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<string> words(N);
    unordered_set<string> uniqueWords;
    
    for (int i = 0; i < N; i++) {
        cin >> words[i];
        if (i > 0 && (words[i][0] != words[i-1].back() || uniqueWords.count(words[i]) > 0)) {
            cout << "No" << endl;
            return 0;
        }
        uniqueWords.insert(words[i]);
    }
    
    cout << "Yes" << endl;
    return 0;
}