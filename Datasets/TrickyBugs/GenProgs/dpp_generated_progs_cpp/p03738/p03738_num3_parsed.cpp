#include <iostream>
#include <string>
using namespace std;

string compareMagnitudes(string A, string B) {
    if (A.length() > B.length()) {
        return "GREATER";
    } else if (A.length() < B.length()) {
        return "LESS";
    }
    
    for (int i = 0; i < A.length(); i++) {
        if (A[i] > B[i]) {
            return "GREATER";
        } else if (A[i] < B[i]) {
            return "LESS";
        }
    }
    
    return "EQUAL";
}

int main() {
    string A, B;
    cin >> A >> B;
    
    string result = compareMagnitudes(A, B);
    cout << result << endl;
    
    return 0;
}