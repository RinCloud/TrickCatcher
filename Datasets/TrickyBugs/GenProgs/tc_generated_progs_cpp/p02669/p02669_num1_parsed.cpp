#include<cstdio>
#include<unordered_map>
#define int long long
std::unordered_map<int,int>f;
int t,n,a,b,c,d;

inline int mn(int x,int y) {
    return x<y?x:y;
}

int dfs(int x) {
    if(f.count(x))
        return f[x];
    
    f[x]=1e18;
    
    if(x<=2e9) {
        f[x]=mn(f[x], x*d);
    }
    
    if(!(x%2)) {
        f[x]=mn(f[x], dfs(x/2)+a);
    }
    
    if(!(x%3)) {
        f[x]=mn(f[x], dfs(x/3)+b);
    }
    
    if(!(x%5)) {
        f[x]=mn(f[x], dfs(x/5)+c);
    }
    
    if(x%2) {
        f[x]=mn(f[x], dfs(x-1)+d);
    }
    
    if(x%3) {
        f[x]=mn(f[x], dfs(x-x%3)+x%3*d);
    }
    
    if(x%5) {
        f[x]=mn(f[x], dfs(x-x%5)+x%5*d);
    }
    
    if(x%2) {
        f[x]=mn(f[x], dfs(x+1)+d);
    }
    
    if(x%3) {
        f[x]=mn(f[x], dfs(x-x%3+3)+(3-x%3)*d);
    }
    
    if(x%5) {
        f[x]=mn(f[x], dfs(x-x%5+5)+(5-x%5)*d);
    }
    
    return f[x];
}

signed main() {
    for(scanf("%lld",&t); t; --t) {
        scanf("%lld%lld%lld%lld%lld",&n,&a,&b,&c,&d);
        f.clear();
        f[0]=0;
        
        printf("%lld\n", dfs(n));
    }
    
    return 0;
}
