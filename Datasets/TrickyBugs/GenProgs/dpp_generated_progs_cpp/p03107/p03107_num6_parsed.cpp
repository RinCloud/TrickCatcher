#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    string S;
    cin >> S;

    int count = 0;
    stack<char> stk;

    for (int i = 0; i < S.length(); i++) {
        if (!stk.empty() && stk.top() != S[i]) {
            stk.pop();
            count += 2;
        } else {
            stk.push(S[i]);
        }
    }

    cout << count << endl;

    return 0;
}