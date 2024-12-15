#include <iostream>
#include <algorithm>
using namespace std;

int sum_of_digits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int N;
    cin >> N;
    
    int min_sum = INT_MAX;
    for (int A = 1; A <= N / 2; A++) {
        int B = N - A;
        int sum = sum_of_digits(A) + sum_of_digits(B);
        min_sum = min(min_sum, sum);
    }
    
    cout << min_sum << endl;
    
    return 0;
}