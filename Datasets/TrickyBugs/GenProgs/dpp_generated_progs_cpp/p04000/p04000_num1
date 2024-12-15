#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll H, W, N;
    cin >> H >> W >> N;
    set<pair<ll ,ll> > s;
    for(ll i = 0; i < N; i++) {
        ll a, b;
        cin >> a >> b;
        for(ll j = -1; j <= 1; j++) {
            for(ll k = -1; k <= 1; k++) {
                if(a+j >= 2 && a+j <= H-1 && b+k >= 2 && b+k <= W-1) {
                    s.insert({a+j, b+k});
                }
            }
        }
    }
    vector<ll> freq(10, 0);
    for(auto itr = s.begin(); itr != s.end(); itr++) {
        ll x = itr->first, y = itr->second;
        for(ll j = -1; j <= 1; j++) {
            for(ll k = -1; k <= 1; k++) {
                ll count = 0;
                for(ll q = 0; q <= 1; q++) {
                    for(ll r = 0; r <= 1; r++) {
                        if( x+j+q >= 1 && x+j+q <= H && y+k+r >= 1 && y+k+r <= W ) {
                            if(s.find({x+j+q, y+k+r}) != s.end()) {
                                count++;
                            }
                        }
                    }
                }
                freq[count]++;
            }
        }
    }
    ll total = (H-2)*(W-2);
    for(ll i = 0; i <= 9; i++) {
        total -= freq[i];
        freq[i] = total;
    }
    for(ll i = 0; i <= 9; i++) {
        cout << freq[i] << endl;
    }
    return 0;
}