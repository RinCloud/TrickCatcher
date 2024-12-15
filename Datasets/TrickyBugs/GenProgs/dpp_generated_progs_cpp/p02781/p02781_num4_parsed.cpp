#include <iostream>
#include <string>
using namespace std;

int countNonZeroDigits(long long n) {
    int count = 0;
    string num = to_string(n);
    for (char digit : num) {
        if (digit != '0') {
            count++;
        }
    }
    return count;
}

int main() {
    long long N;
    int K;
    cin >> N >> K;
    
    int count = 0;
    for (long long i = 1; i <= N; i++) {
        if (countNonZeroDigits(i) == K) {
            count++;
        }
    }
    
    cout << count << endl;
    
    return 0;
}