#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    unordered_set<char> colors;
    for (int i = 0; i < N; i++) {
        char color;
        cin >> color;
        colors.insert(color);
    }
    
    if (colors.size() == 3) {
        cout << "Three" << endl;
    } else {
        cout << "Four" << endl;
    }
    
    return 0;
}