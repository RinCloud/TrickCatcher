#include <iostream>
using namespace std;

int main() {
    long long N;
    cin >> N;
    
    int sum = 0;
    
    while(N){
        sum += N%10;
        N /= 10;
    }
    
    cout << sum << endl;
    
    return 0;
}