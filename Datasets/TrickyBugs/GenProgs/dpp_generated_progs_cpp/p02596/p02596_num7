#include <iostream>
#include <string>

using namespace std;

int main() {
    int K;
    cin >> K;

    string s = "7", result = "";
    int count = 0;

    while (result != "0") {
        result = to_string(stoll(s) % K);
        count++;

        if (result == "0") {
            cout << count << endl;
            return 0;
        }

        s += "7";
    }

    cout << -1 << endl;

    return 0;
}