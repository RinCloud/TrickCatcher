#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int N;
    cin >> N;
     
    vector<int> P(N);
    for(int i=0; i<N; i++){
        cin >> P[i];
    }
     
    vector<int> S(N, 0);
    for(int i=0; i<N; i++){
        S[P[i]-1] = i+1;
    }
     
    vector<int> X, Y;
    for(int i=0; i<N; i++){
        if(S[i] == 0){
            X.push_back(i+1);
        }
        else{
            Y.push_back(i+1);
        }
    }
     
    if(X.size() != Y.size()){
        cout << -1 << endl;
        return 0;
    }
     
    int n = X.size();
    int cnt = 0;
    string ans = "";
    for(int i=0; i<n; i++){
        if(X[i] > cnt && Y[i] > cnt){
            cout << -1 << endl;
            return 0;
        }
        if(X[i] <= cnt && Y[i] <= cnt){
            cout << -1 << endl;
            return 0;
        }
         
        if(X[i] <= cnt){
            ans += "1";
        }
        else{
            ans += "0";
        }
         
        cnt = max(cnt, max(X[i], Y[i]));
    }
     
    cout << ans << endl;
    return 0;
}