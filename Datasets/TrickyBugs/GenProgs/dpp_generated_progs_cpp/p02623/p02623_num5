#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, M, K;
    cin >> N >> M >> K;
    
    vector<int> A(N), B(M);
    for(int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    for(int i = 0; i < M; i++) {
        cin >> B[i];
    }
    
    int time = 0;
    int count = 0;
    int a_index = 0;
    int b_index = 0;
    while(a_index < N && time + A[a_index] <= K) {
        time += A[a_index];
        a_index++;
        count++;
    }
    
    while(b_index < M && a_index >= 0) {
        time += B[b_index];
        b_index++;
        
        while(a_index > 0 && time > K) {
            time -= A[a_index - 1];
            a_index--;
        }
        
        if(a_index >= 0 && time <= K) {
            count = max(count, a_index + b_index);
        }
    }
    
    cout << count << endl;
    
    return 0;
}