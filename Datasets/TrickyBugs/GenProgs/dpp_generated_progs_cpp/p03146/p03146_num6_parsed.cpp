#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int s;
    cin >> s;

    unordered_set<int> set;
    int curr = s;
    set.insert(curr);

    int m = 1;
    while(true) {
        if(curr % 2 == 0) {
            curr /= 2;
        } else {
            curr = 3 * curr + 1;
        }
        m++;

        if(set.count(curr) > 0)
            break;

        set.insert(curr);
    }

    cout << m << endl;

    return 0;
}