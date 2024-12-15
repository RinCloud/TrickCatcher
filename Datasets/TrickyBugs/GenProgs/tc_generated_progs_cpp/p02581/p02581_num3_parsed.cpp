#include<bits/stdc++.h>
#define tmp(x) std::cout<<"& "<<(x)<<" &\n"
#define rep(i,a,b) for(int i=(a);i<=(b);++i)
#define per(i,a,b) for(int i=(a);i>=(b);--i)
#define mp make_pair
#define pii pair<int,int>
typedef long long ll;

using namespace std;
const int maxn=2e3+100;
const int inf=-1e9+100;
int n,t;
int a[maxn*3],dp[maxn][maxn],ans,now[maxn],add;
int  tp[maxn],tnow[maxn];
int tmpdp[maxn][maxn];
vector<vector<int>> card;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n;
    rep(i,1,3*n)cin>>a[i];
    if(n==1){cout<<(a[1]==a[2]&&a[2]==a[3]);return 0;}
    rep(i,1,n)rep(j,1,n)dp[i][j]=inf;
    ans=inf;
    rep(i,1,n)now[i]=inf;


    rep(i,1,n){
        vector<int> v;
        if(i==1){
            rep(j,1,5)v.push_back(a[j]);
        }
        else if(i==n)v.push_back(a[3*n]);
        else rep(j,3*i,3*i+2)v.push_back(a[j]);
        card.push_back(v);
    }

    rep(i,1,5){
        rep(j,1,5){
            if(i!=j){
                int pos=-1,val=1;
                rep(k,1,5){
                    if(k==i||k==j)continue;
                    if(pos==-1)pos=a[k];
                    else if(pos!=a[k])val=0;
                }
                dp[a[i]][a[j]]=dp[a[j]][a[i]]=val;
            }
        }
    }

    rep(i,1,n){
        rep(j,i,n){
            now[j]=max({now[j],dp[i][j]});
        }
    }
    rep(i,1,n)ans=max(ans,now[i]);


    rep(i,1,n-2){//
        if(card[i][0]==card[i][1]&&card[i][0]==card[i][2]){++add;continue;}
        rep(j,1,n)tp[j]=dp[j][j],tnow[j]=now[j];
        rep(j,0,2)rep(k,1,n)tmpdp[card[i][j]][k]=tmpdp[k][card[i][j]]=dp[card[i][j]][k];
        int tans=ans;

        rep(j,0,2){
            int c1=card[i][j],c2=-1,c3=-1;
            rep(k,0,2){
                if(j==k)continue;
                c2=card[i][k];
                rep(u,0,2){
                    if(u!=j&&u!=k)c3=card[i][u];
                }

                dp[c1][c2]=dp[c2][c1]=max({dp[c1][c2],dp[c2][c1],ans});
                if(c3>0)dp[c1][c2]=dp[c2][c1]=max(dp[c1][c2],tp[c3]+1);
                tnow[c1]=max(tnow[c1],dp[c1][c2]);
                tnow[c2]=max(tnow[c2],dp[c1][c2]);
                tans=max(tans,dp[c2][c1]);
            }
        }
        rep(j,0,2){
            int c1=card[i][j],cur=-1;
            rep(k,0,2){
                if(j==k)continue;
                if(cur==-1)cur=card[i][k];
                else if(cur!=card[i][k])cur=-1;
            }
            rep(k,1,n){
                
                dp[c1][k]=dp[k][c1]=max({dp[k][c1], dp[c1][k],now[k]});
                if(cur>0)dp[c1][k]=dp[k][c1]=max({dp[c1][k],tmpdp[cur][k]+1});
                dp[c1][k]=max(dp[c1][k],dp[k][c1]);
                tnow[k]=max({tnow[k],dp[c1][k]});
                tnow[c1]=max({tnow[c1],dp[c1][k]});
                tans=max({tans,dp[c1][k]});

            }
        }

        rep(j,1,n){now[j]=max(now[j],tnow[j]);}
        ans=max(ans,tans);
    }
    ans=max(ans,dp[card[n-1][0]][card[n-1][0]]+1);
//    rep(i,1,n)ans=max(ans,now[i]);
    cout<<ans+add;
//    tmp(ans);
//    tmp(add);
    return 0;
}
