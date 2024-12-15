#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> p;
    for(int i=0;i<n;i++){
        int a,b;
        cin >> a >> b;
        p.emplace(b,a);
    }
    int t=0; // Change t to start from 0
    while(!p.empty()){
        pair<int,int> s=p.top();
        p.pop();
        t+=s.second; // Change t to increase by job completion time
        if(t > s.first){ 
            cout << "No" << endl; // If deadline exceeded, print "No" and exit
            return 0;
        }
    }
    cout << "Yes" << endl; // If all jobs completed within deadline, print "Yes"
}