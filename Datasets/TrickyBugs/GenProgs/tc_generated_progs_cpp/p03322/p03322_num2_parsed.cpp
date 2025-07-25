#include <bits/stdc++.h>
using namespace std;

const int _ = 250007;
using lint = long long;
const lint bas = 250007 , mo = 2059392230891;

inline lint sfx(lint a,lint b) {
    a %= mo, b %= mo;
    return (a*b-(lint)((long double)a/mo*b+0.5)*mo+mo)%mo;
}

inline lint powa(lint a, lint t) {
    lint b=1;
    while(t){if(t&1)b=sfx(a,b);a=sfx(a,a),t>>=1;}
    return b;
}

inline lint inva(lint a) {
    return powa(a,mo-2);
}

const lint ibas = inva(bas);

int n;
char s[_];
lint loc[_];
unordered_map<lint,int> cnt;

inline lint trans(lint h,char op) {
    if(op=='<')return sfx(h,ibas);
    if(op=='>')return sfx(h,bas);
    if(op=='+')return (h+1)%mo;
    if(op=='-')return (h-1+mo)%mo;
}

int main() {
    ios::sync_with_stdio(0),cout.tie(nullptr);
    
    cin >> n >> (s+1);

    loc[0]=1;
    for(int i=1;i<=n;i++) {
        loc[i]=loc[i-1];
        if(s[i]=='<')loc[i]=sfx(loc[i],ibas);
        if(s[i]=='>')loc[i]=sfx(loc[i],bas);
    }

    lint tar=0;
    for(int i=n;i>=1;i--)tar=trans(tar,s[i]);
    cnt[0]=1;
    lint ans=0,now=0;
    for(int i=n;i>=1;i--)
        now=trans(now,s[i]),
        ans+=cnt[sfx(now-tar+mo,loc[i-1])],
        cnt[sfx(now,loc[i-1])]++;
    cout << ans << "\n";
    
    return 0;
}
