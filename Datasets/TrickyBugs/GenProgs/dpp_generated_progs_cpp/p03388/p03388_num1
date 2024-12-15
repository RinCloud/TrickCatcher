#include<iostream>
#include<vector>
#include<algorithm>
 
using namespace std;
 
int main() {
    int Q;
    cin >> Q;
 
    vector<long long> A(Q), B(Q);
    for (int i = 0; i < Q; i++) {
        cin >> A[i] >> B[i];
    }
 
    long long max_rank = 1e10;
    long long max_score = max_rank * max_rank;
    for (int i = 0; i < Q; i++) {
        long long rank_A = A[i];
        long long rank_B = B[i];
        long long score = rank_A * rank_B;
 
        long long diff = score - max_score;
        long long ans = (diff + max_rank - 1) / max_rank;
        cout << ans << endl;
    }
 
    return 0;
}