#include <iostream>
#include <string>
#include <vector>

using namespace std;

int countIntegers(int N, int K) {
    int count = 0;
    for (int i = 1; i <= N; i++) {
        string number = to_string(i);
        int nonZeroDigits = 0;
        for (char digit : number) {
            if (digit != '0') {
                nonZeroDigits++;
            }
        }
        if (nonZeroDigits == K) {
            count++;
        }
    }
    return count;
}

int main() {
    string N_str;
    cin >> N_str;
    int N = stoi(N_str);

    int K;
    cin >> K;

    int result = countIntegers(N, K);
    cout << result << endl;

    return 0;
}