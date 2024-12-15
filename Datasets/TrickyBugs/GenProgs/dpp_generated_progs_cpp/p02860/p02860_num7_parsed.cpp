#include <iostream>
#include <string>

using namespace std;

int main() {
    int N;
    cin >> N;

    string S;
    cin >> S;

    // Check if the length of the string is even
    if (N % 2 != 0) {
        cout << "No" << endl;
        return 0;
    }

    // Split the string into two equal parts
    string first_half = S.substr(0, N / 2);
    string second_half = S.substr(N / 2, N / 2);

    // Check if the two halves of the string are equal
    if (first_half == second_half) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}