#include<bits/stdc++.h>
using namespace std;

struct node{
    int x,i;
    node():x(0),i(0){}
    node(int y,int j):x(y),i(j){}
};

bool operator < (node a,node b)
{
    return a.x<b.x;
}

bool pd(int mid, int n, vector<node>& vec) {
    int tot = n << 1;
	
	stack<int> s;
    vector<int> id(tot + 1, 0);
    vector<int> low(tot + 1, 0);
    vector<int> dfn(tot + 1, 0);
    vector<int> col(tot + 1, 0);
	vector<int> point[tot + 1];

	for(int i = 0; i < tot; ++i) {
		int r = vec[i].i;
		pair<int,int> pr{i+1, i-1};
		point[pr.first].push_back(r);
		point[pr.second].push_back(r);
	}
    
    for(int i = 1; i <= tot; i++)
	{
		int v=vec[i-1].i;
		point[i].push_back(v<=n?v+n:v-n);
	}
    
	for(int i = 1; i <= tot; i++) 
		if(!dfn[i]) tarjan(i);    

    for(int i = 1; i <= n; i++)
		if(col[i]==col[i+n])
			return false;
    return true;
}


int main()
{
    int n;
	cin >> n;
	
    vector<node> vec(2*n);
    
    for(int i=0;i<n;i++) {
		int x, y;
		cin >> x >> y;
		vec[i].x = x;
		vec[i].i = i + 1;
		vec[i + n].x = y;
		vec[i + n].i = i + n + 1;
	}
    
    sort(vec.begin(),vec.end());
    
    int l = 0, r = 1e9;
    while(l < r)
	{
		int mid = (l+r+1)/2;
		if(pd(mid, n, vec))
			l = mid;
		else
			r = mid-1;
	}
    
    cout << l;
}
