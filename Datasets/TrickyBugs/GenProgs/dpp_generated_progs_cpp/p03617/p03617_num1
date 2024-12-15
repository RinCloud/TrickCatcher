#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int Q, H, S, D, N;
    cin >> Q >> H >> S >> D >> N;
    
    long long int cost = 0;
    
    if(N % 2 == 0) {
        long long int minBottle = min({Q * 4, H * 2, S}) * (N / 2);
        long long int twoLiterBottle = D * (N / 2);
        cost = min(minBottle, twoLiterBottle);
    } else {
        long long int minBottle = min({Q * 4, H * 2, S}) * (N / 2) + S;
        long long int twoLiterBottle = D * (N / 2);
        cost = min(minBottle, twoLiterBottle);
    }
    
    cout << cost << endl;
    
    return 0;
}