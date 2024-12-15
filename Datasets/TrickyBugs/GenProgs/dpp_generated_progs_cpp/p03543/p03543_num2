#include <iostream>
#include <string>
using namespace std;

int main() {
    string N;
    cin >> N;

    bool good = false;
    for (int i = 0; i <= 2; i++) {
        if (N[i] == N[i+1] && N[i+1] == N[i+2]) {
            good = true;
            break;
        }
    }

    if (good) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}