#include <iostream>
#include <string>
using namespace std;

bool checkDislikedDigits(int n, int k, int dislikedDigits[]) {
    string nString = to_string(n);
    for (int i = 0; i < k; i++) {
        if (nString.find(to_string(dislikedDigits[i])) != string::npos) {
            return false;
        }
    }
    return true;
}

int main() {
    int N, K;
    cin >> N >> K;

    int dislikedDigits[K];
    for (int i = 0; i < K; i++) {
        cin >> dislikedDigits[i];
    }

    int amount = N;
    while (!checkDislikedDigits(amount, K, dislikedDigits)) {
        amount++;
    }

    cout << amount << endl;
    return 0;
}