#include <bits/stdc++.h>
using namespace std;
int main(){int n, m;cin >> n >> m;vector<int> r(n,0);for (int i; i<m*2; i++){int t;cin >>t;r.at(t-1)++;}for (int c:r){cout<<c<<endl;}}