#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    // Calculate the prime factors and their powers for each number from 2 to N
    vector<int> primeFactors(N + 1, 0);
    for (int i = 2; i <= N; i++) {
        int num = i;
        for (int j = 2; j * j <= num; j++) {
            while (num % j == 0) {
                primeFactors[j]++;
                num /= j;
            }
        }
        if (num > 1) {
            primeFactors[num]++;
        }
    }

    // Count the number of Shichi-Go numbers
    int count = 0;
    for (int i = 2; i <= N; i++) {
        if (primeFactors[i] >= 4 && primeFactors[i] % 2 == 1) {
            count++;
        }
    }
    
    cout << count << endl;
    
    return 0;
}