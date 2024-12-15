#include <iostream>
#include <algorithm>
#include <vector>

int main(){
    int n;
    std::cin >> n;
    std::vector<int> l(n), r(n);
    
    for(int i = 0; i < n; i++){
        std::cin >> l[i] >> r[i];
    }
    
    std::sort(l.begin(), l.end());
    std::sort(r.begin(), r.end());
    
    int y = 0;
    while(r[y] < l[n - y - 1]){
        y++;
    }
    
    long long ans = 0;
    
    for(int i = 0; i < y; i++){
        ans += l[n - i - 1] - r[i];
    }
    
    int g = 0;
    
    if(y != 0){
        if(l[n - 1] < 0){
            g = 0 - l[n - y];
        }
    }
    
    if(y != 0){
        if(r[0] > 0){
            g = std::max(g, r[y - 1]);
        }
    }
    
    int e = 0, f = 0;
    
    if(r[y] < 0){
        e = 0 - r[y];
    }
    
    if(l[n - y - 1] > 0){
        f = l[n - y - 1];
    }
    
    g = std::max({g, e, f});
    
    ans += g;
    
    int anf = 0;
    
    e = 0;
    f = 0;
    
    if(r[0] < 0){
        e = 0 - r[0];
    }
    
    if(l[n - 1] > 0){
        f = l[n - 1];
    }
    
    if(e > 0){
        anf = e;
    }
    
    if(f > e){
        anf = f;
    }
    
    if(ans < anf){
        ans = anf;
    }
    
    std::cout << ans * 2 << std::endl;
    
    return 0;
}
