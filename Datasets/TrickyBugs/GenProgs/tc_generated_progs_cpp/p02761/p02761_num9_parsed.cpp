#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<int> kazu(n, -1);
    int f = 0;
    int g = 0;
    for(int i=0;i<m;i++){
        int a,b;
        cin >> a >> b;
        if(kazu.at(a-1)!=-1&&kazu.at(a-1)!=b){
            f=-1;
        }else{
            kazu.at(a-1) = b;
        }
        if(a==1 && b==0 && n!=1){
            f = -1;
        }
    }
    if(f == -1||(n > 1 && kazu.at(0) == -1)){
        cout << -1 << endl;
    }else{
        for(int i=0;i<n;i++){
            if(kazu.at(i) == -1){
                if(i == 0 && n != 1){
                    cout << 1;
                }else{
                    cout << 0;
                }
            }else{
                cout << kazu.at(i);
            }
        }
        cout << endl;
    }
}
