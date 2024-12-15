#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int maxDivisible = 0;
    int ans = 0;
    
    for (int i = 1; i <= N; i++) {
        int count = 0;
        int num = i;
        while (num % 2 == 0) {
            num /= 2;
            count++;
        }
        if (count > maxDivisible) {
            maxDivisible = count;
            ans = i;
        }
    }
    
    cout << ans << endl;
    
    return 0;
}
