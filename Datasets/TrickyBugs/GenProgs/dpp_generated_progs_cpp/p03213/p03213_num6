#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    // Calculating the prime factors of N!
    int primeCount[101] = {0};
    for (int i = 2; i <= N; i++) {
        int num = i;
        for (int j = 2; j <= num; j++) {
            while (num % j == 0) {
                primeCount[j]++;
                num /= j;
            }
        }
    }
    
    // Counting the number of Shichi-Go numbers
    int count = 0;
    for (int i = 2; i <= N; i++) {
        if (primeCount[i] >= 74) {
            count++;
        }
    }
    
    cout << count << endl;
    
    return 0;
}