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
            if(i > 0) cnt++;
        }else if(t == 2){
            last = i;
            int f;
            char c; // Changed string to char
            cin >> f >> c;
            if(cnt % 2 == 0){
                if(f == 1){
                    s = c + s; // Changed s.insert(0,c) to c + s
                }else{
                    s += c;
                }
            }else{
                if(f == 1){
                    s += c;
                }else{
                    s = c + s; // Changed s.insert(0,c) to c + s
                }
            }
        }
    }
    if(cnt % 2 != 0) reverse(s.begin(),s.end());
    cout << s << endl;
    return 0;
}
