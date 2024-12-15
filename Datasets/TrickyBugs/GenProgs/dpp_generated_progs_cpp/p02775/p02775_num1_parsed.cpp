#include <iostream>
#include <cmath>
using namespace std;

int main() {
    string N;
    cin >> N;

    int numDigits = N.size();
    int answer = 0;

    for (int i = 1; i <= numDigits; i++) {
        answer += stoi(N) % pow(10, i);
    }

    cout << answer << endl;

    return 0;
}