#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    priority_queue<pair<int,int>> p;
    for(int i=0;i<n;i++){
        int a,b;
        cin >> a >> b;
        p.emplace(b,a);
    }
    int t=0; // change t from 1000000000 to 0
    while(!p.empty()){
        pair<int,int> s=p.top();
        p.pop();
        t+=s.second; // change t-=s.second to t+=s.second
        if(t > s.first){ // check if the current time exceeds the deadline
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}
