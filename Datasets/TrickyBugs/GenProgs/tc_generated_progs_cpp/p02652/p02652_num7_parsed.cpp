#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
const int N=1001001;
char s[N];
int n;
int main(){
    ios::sync_with_stdio(false);
    cin>>s;
    n=strlen(s);
    int l=0,r=0; // initialize l and r as 0
    int l0=0,r0=0;
    int l1=0,r1=0; // initializing l1 and r1 as 0
    int ans = 0; // initialize ans as 0 to store minimum unbalancedness

    for(int i=0;i<n;i++){
        char c=s[i];
        if(c=='1'){
            l0++;
            r0++;
            l1++;
            r1++;
        }
        else if(c=='0'){
            l0--;
            r0--;
            l1--;
            r1--;
        }
        else{
            l0--;
            r0++;
            l1--;
            r1++;
        }

        int d=(r0-l0)%2==0?2:1;
        if(l0<l){
            l1=l0;
            l0+=d;
        }
        if(r0>r){
            r1=r0;
            r0-=d;
        }
        ans = max(ans, r0 - l0); // update ans with current unbalancedness
        if(l0>r0){
            l = i + 1;
            r = i;
            l0 = 0;
            r0 = 0;
            l1 = 0;
            r1 = 0;
        }
        // cerr<<l<<" "<<r<<" "<<l0<<" "<<r0<<" "<<l1<<" "<<r1<<endl;
    }

    cout<<ans<<endl; // output the minimum unbalancedness
    return 0;
}
