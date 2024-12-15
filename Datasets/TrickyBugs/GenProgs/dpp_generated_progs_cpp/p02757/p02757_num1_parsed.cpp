#include<iostream>
#include<string>
#include<vector>
typedef long long ll;
using namespace std;

int main(){
    int N, P;
    string S;
    cin>>N>>P>>S;
    ll ans=0;
    if(P==2||P==5){
        for(int i=0;i<N;i++){
            if((S[i]-'0')%P==0){
                ans+=(i+1);
            }
        }
    }
    else{
        vector<int> cnt(P);
        cnt[0]=1;
        int sum=0, t=1;
        for(int i=N-1;i>=0;i--){
            sum=(sum+(S[i]-'0')*t)%P;
            t=(t*10)%P;
            ans+=cnt[sum];
            cnt[sum]++;
        }
    }
    cout<<ans<<endl;
    return 0;
}