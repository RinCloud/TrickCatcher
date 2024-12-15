#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    int len = 1 << N;
    vector<int> A(len);
    for(int i=0; i<len; i++) {
        cin >> A[i];
    }
    vector<int> max_sum(len);
    for(int K=1; K<len; K++) {
        int max_val = 0;
        for(int i=0; i<K; i++) {
            for(int j=i+1; j<=K; j++) {
                max_val = max(max_val, A[i]+A[j]);
            }
        }
        max_sum[K] = max_val;
    }
    for(int K=1; K<len; K++) {
        cout << max_sum[K] << endl;
    }
    return 0;
}