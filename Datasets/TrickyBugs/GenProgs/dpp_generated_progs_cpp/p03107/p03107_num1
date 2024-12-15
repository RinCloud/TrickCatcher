#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    cin >> S;

    int red_count = 0;
    int blue_count = 0;

    for (int i = 0; i < S.length(); i++) {
        if (S[i] == '0') {
            red_count++;
        }
        else {
            blue_count++;
        }
    }

    int min_count = min(red_count, blue_count);
    cout << 2 * min_count << endl;

    return 0;
}