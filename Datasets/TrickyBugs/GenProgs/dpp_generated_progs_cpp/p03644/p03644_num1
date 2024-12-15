#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int maxDivisible = 1;
    for(int i = 2; i <= N; i++) {
        int num = i;
        int count = 0;
        
        while(num % 2 == 0) {
            num /= 2;
            count++;
        }
        
        if(count > maxDivisible) {
            maxDivisible = count;
        }
    }
    
    cout << (1 << maxDivisible) << endl;
    
    return 0;
}