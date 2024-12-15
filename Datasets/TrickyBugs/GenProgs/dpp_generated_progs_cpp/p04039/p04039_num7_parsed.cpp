#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> dislikedDigits(K);
    for (int i = 0; i < K; i++) {
        cin >> dislikedDigits[i];
    }

    int answer = N;
    while (true) {
        string number = to_string(answer);
        bool containsDislikedDigit = false;
        for (char digit : number) {
            if (find(dislikedDigits.begin(), dislikedDigits.end(), digit - '0') != dislikedDigits.end()) {
                containsDislikedDigit = true;
                break;
            }
        }
        if (!containsDislikedDigit) {
            break;
        }
        answer++;
    }

    cout << answer << endl;

    return 0;
}
