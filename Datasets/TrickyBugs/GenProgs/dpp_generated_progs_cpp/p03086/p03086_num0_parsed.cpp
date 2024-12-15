#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    cin >> S;

    int max_length = 0;
    int current_length = 0;

    for (int i = 0; i < S.length(); i++) {
        if (S[i] == 'A' || S[i] == 'C' || S[i] == 'G' || S[i] == 'T') {
            current_length++;
        }
        else {
            current_length = 0;
        }

        max_length = max(max_length, current_length);
    }

    cout << max_length << endl;

    return 0;
}
