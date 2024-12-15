#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int N, A, B;
    cin >> N >> A >> B;
    vector<long long> h(N);
    for(int i=0; i<N; i++){
        cin >> h[i];
    }

    long long ans = 0;
    long long l = 0, r = 1e9;
    while(l+1 < r){
        long long m = (l+r) / 2;
        long long cnt = 0;
        for(int i=0; i<N; i++){
            long long damage = max(0LL, h[i] - B*m + A - B - 1) / (A-B);
            cnt += damage;
        }
        if(cnt <= m){
            r = m;
        }else{
            l = m;
        }
    }
    cout << r << endl;
    
    return 0;
}