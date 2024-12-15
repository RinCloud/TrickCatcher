#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int N, K;
    string S;
    cin >> N >> K;
    cin >> S;

    string T = S;
    reverse(T.begin(), T.end());

    string U = S + T;

    int current_length = N;
    for (int i = 0; i < K && current_length > 0; i++) {
        current_length--;
    }

    string result = U.substr(0, current_length);

    cout << result;

    return 0;
}