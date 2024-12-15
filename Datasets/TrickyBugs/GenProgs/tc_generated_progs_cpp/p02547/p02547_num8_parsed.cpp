#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, temp = 0;
    cin >> t;
    bool cnt = false;
    while(t--){
        int a, b;
        cin >> a >> b;
        if(a == b) temp++;
        else temp = 0;
        if(temp >= 2){
            cout << "Yes\n";
            cnt = true;
            break;
        }
    }
    if(!cnt) cout << "No\n";
}
