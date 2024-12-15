#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    unordered_set<char> colors;
    for (int i = 0; i < N; i++) {
        string S;
        cin >> S;
        colors.insert(S[0]);
    }
    
    if (colors.size() == 3) {
        cout << "Three" << endl;
    } else {
        cout << "Four" << endl;
    }
    
    return 0;
}