#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    string s, t;
    cin >> N >> s >> t;

    int len = 2 * N;
    for (int i = N; i > 0; i--) {
        string prefix = s.substr(0, i);
        string suffix = t.substr(N - i, i);
        if (prefix == suffix) {
            len = 2 * N - i;
            break;
        }
    }

    cout << len << endl;
    return 0;
}