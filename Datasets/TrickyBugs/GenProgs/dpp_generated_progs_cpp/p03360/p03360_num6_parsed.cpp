#include<bits/stdc++.h>
using namespace std;

int main() {
    int A, B, C, K;
    cin >> A >> B >> C >> K;
    
    int maxNum = max({A, B, C});
    int sum = A + B + C - maxNum;
    sum += maxNum * pow(2, K);
    
    cout << sum << endl;
    
    return 0;
}