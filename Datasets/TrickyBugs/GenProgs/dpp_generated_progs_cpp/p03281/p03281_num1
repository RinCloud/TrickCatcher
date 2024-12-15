#include <iostream>
#include <cmath>

using namespace std;

int countNumbersWith8Divisors(int N) {
    int count = 0;
    
    for (int num = 1; num <= N; num++) {
        int divCount = 0;
        int sqrtNum = sqrt(num);
        for (int i = 1; i <= sqrtNum; i++) {
            if (num % i == 0) {
                if (num / i == i) {
                    divCount++;
                } else {
                    divCount += 2;
                }
            }
        }
        if (divCount == 8 && num % 2 != 0) {
            count++;
        }
    }
    
    return count;
}

int main() {
    int N;
    cin >> N;
    
    int result = countNumbersWith8Divisors(N);
    
    cout << result << endl;
    
    return 0;
}