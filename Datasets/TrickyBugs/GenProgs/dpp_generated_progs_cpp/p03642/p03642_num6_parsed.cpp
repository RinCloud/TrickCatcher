#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int N;
    cin >> N;
    
    vector<int> cards(N);
    for (int i = 0; i < N; i++) {
        cin >> cards[i];
    }
    
    int operations = 0;
    for (int i = 0; i < N; i++) {
        if (isPrime(cards[i])) {
            operations++;
            int j = i + 1;
            while (j < N && cards[j] - cards[j-1] == 1) {
                j++;
            }
            i = j - 1;
        }
    }
    
    cout << operations << endl;
    
    return 0;
}