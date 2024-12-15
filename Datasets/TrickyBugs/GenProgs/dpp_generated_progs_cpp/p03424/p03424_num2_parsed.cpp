#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int N;
    cin >> N;

    unordered_set<char> colors;
    for (int i = 0; i < N; i++) {
        char c;
        cin >> c;
        colors.insert(c);
    }

    if (colors.size() == 4) {
        cout << "Four" << endl;
    } else {
        cout << "Three" << endl;
    }

    return 0;
}