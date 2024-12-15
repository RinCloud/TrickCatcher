#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    
    int min_val = 1;
    
    for(int i = 0; i < N; i++) {
        if(min_val * 2 < min_val + K) {
            min_val *= 2;
        }
        else {
            min_val += K;
        }
    }
    
    cout << min_val << endl;
    
    return 0;
}