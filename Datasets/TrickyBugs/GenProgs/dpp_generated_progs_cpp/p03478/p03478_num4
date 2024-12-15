#include<iostream>
using namespace std;

int digitSum(int n) {
    int sum = 0;

    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}


int main() {
    int N, A, B;
    cin >> N >> A >> B;

    int sum = 0;
    for (int i = 1; i <= N; i++) {
        int temp = digitSum(i);
        if (temp >= A && temp <= B) {
            sum += i;
        }
    }

    cout << sum << endl;

    return 0;
}