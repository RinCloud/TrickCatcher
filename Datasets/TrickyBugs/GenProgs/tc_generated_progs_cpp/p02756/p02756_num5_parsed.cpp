#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cmath>
#include<vector>
using namespace std;

int main(){
    string s;
    int q;
    cin >> s >> q;
    int cnt = 0;
    int last = 0;
    for(int i=0;i<q;i++){
        int t;
        cin >> t;
        if(t == 1){
            if(cnt % 2 == 1){
                reverse(s.begin(),s.end());
            }
            cnt++;
        }else if(t == 2){
            last = i;
            int f;
            string c;
            cin >> f >> c;
            if(f == 1){
                if(cnt % 2 == 1){
                    s += c;
                }else{
                    s.insert(0,c);
                }
            }else{
                if(cnt % 2 == 1){
                    s.insert(0,c);
                }else{
                    s += c;
                }
            }
        }
    }
    if(cnt % 2 == 1) reverse(s.begin(),s.end());
    cout << s << endl;
    return 0;
}
