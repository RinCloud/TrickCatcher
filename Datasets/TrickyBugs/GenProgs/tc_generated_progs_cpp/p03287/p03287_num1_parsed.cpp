#include<bits/stdc++.h>
using namespace std;
int main(){
    long n, m, a, r = 0, s = 0;
    map<int, int> v;
    cin >> n >> m;
    while (n--){
        cin >> a;
        s += a;
        r += v[s % m]++;
    }
    cout << r + v[0];
}
