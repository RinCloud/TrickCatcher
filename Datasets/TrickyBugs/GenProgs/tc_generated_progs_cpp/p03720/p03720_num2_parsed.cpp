#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    vector<int> r(n,0);
    for (int i=0; i<m; i++){
        int a,b;
        cin >> a >> b;
        r[a-1]++;
        r[b-1]++;
    }
    for (int c:r){
        cout<<c<<endl;
    }
}
