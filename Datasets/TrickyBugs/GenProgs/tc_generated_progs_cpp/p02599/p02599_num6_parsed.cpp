#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, q, m;
	cin >> n >> q;
    vector<int> c(n), count(n,0), l(q), r(q), ans(q);
	
	for (auto &color: c)
    	cin >> color;
	
	for (int i = 0; i < q; ++i)
    	cin >> l[i] >> r[i];
    
    m = ceil(sqrt(n));
    
    vector<tuple<int,int,int>> s(q);
    for (int i = 0; i < q; ++i)
    	s[i] = make_tuple(l[i]/m, r[i], i);
	
    const auto dec = [](int x, int &k) { if (x == 1) --k; };
    const auto inc = [](int x, int &k) { if (x == 0) ++k; };
    
    int g = 0, h = 0, k = 0;
    
    for (int i = 0; i < q; ++i) {
    	int u = l[i], v = r[i], idx = get<2>(s[i]);
    	
    	for (; h > v; --h)
    		dec(--count[c[h]],k);
    	
    	for (; h < v; ++h)
        	inc(count[c[h]],k);
    	
    	for (; g < u; ++g)
        	dec(--count[c[g]],k);
    	
    	for (; g > u; --g)
        	inc(count[c[g]],k);
    	
    	ans[idx] = k;
    }
	
    for (auto a: ans)
        cout << a << '\n';
}
