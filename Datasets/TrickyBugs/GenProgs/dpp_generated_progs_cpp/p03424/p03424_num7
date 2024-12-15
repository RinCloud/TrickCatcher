#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    unordered_set<char> colors;
    char color;
    for (int i = 0; i < N; i++) {
        cin >> color;
        colors.insert(color);
    }
    
    if (colors.size() == 4) {
        cout << "Four" << endl;
    } else {
        cout << "Three" << endl;
    }
    
    return 0;
}