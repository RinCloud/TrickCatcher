#include <iostream>
#include <string>

using namespace std;

int main() {
    string S;
    cin >> S;

    int count = 0;
    int len = S.length();

    for (int i = 0; i < len; i++) {
        int num = 0;
        for (int j = i; j < len; j++) {
            num = num * 10 + (S[j] - '0');
            if (num % 2019 == 0) {
                count++;
            }
        }
    }

    cout << count << endl;
    
    return 0;
}