#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int s;
    cin >> s;

    unordered_set<int> set;
    int m = 0;
    while (!set.count(s)) {
        set.insert(s);
        m++;
        if (s % 2 == 0) {
            s /= 2;
        } else {
            s = 3 * s + 1;
        }
    }

    cout << m << endl;

    return 0;
}