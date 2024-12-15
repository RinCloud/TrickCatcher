#include<bits/stdc++.h>
using namespace std;

int main(){
    int N, M;
    cin >> N >> M;

    vector<int> A(N);
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }

    sort(A.begin(), A.end(), greater<int>());

    long long ans = 0;
    int cnt = 0;
    for(int i = 0; i < N; i++){
        ans += A[i] * pow(2, cnt);
        if(cnt < M){
            cnt++;
        }
    }

    cout << ans << endl;

    return 0;
}