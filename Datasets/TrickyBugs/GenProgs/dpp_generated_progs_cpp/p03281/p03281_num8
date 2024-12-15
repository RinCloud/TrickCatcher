#include <iostream>
#include <vector>
using namespace std;

vector<int> getDivisors(int num) {
    vector<int> divisors;
    for (int i = 1; i * i <= num; i++) {
        if (num % i == 0) {
            divisors.push_back(i);
            if (i != num / i) {
                divisors.push_back(num / i);
            }
        }
    }
    return divisors;
}

int countSpecialNumbers(int N) {
    int count = 0;
    for (int i = 1; i <= N; i += 2) {
        vector<int> divisors = getDivisors(i);
        if (divisors.size() == 8) {
            count++;
        }
    }
    return count;
}

int main() {
    int N;
    cin >> N;
    int result = countSpecialNumbers(N);
    cout << result << endl;
    return 0;
}