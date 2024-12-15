#include <iostream>
#include <string>

using namespace std;

string compareMagnitudes(string A, string B) {
    int lenA = A.length();
    int lenB = B.length();

    if (lenA > lenB) {
        return "GREATER";
    } else if (lenA < lenB) {
        return "LESS";
    } else {
        for (int i = 0; i < lenA; i++) {
            if (A[i] > B[i]) {
                return "GREATER";
            } else if (A[i] < B[i]) {
                return "LESS";
            }
        }
        return "EQUAL";
    }
}

int main() {
    string A, B;
    cin >> A >> B;

    string result = compareMagnitudes(A, B);
    cout << result << endl;

    return 0;
}