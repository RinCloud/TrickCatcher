#include<bits/stdc++.h>
using namespace std;

struct node{
    int x, i;
    node():x(0),i(0){}
    node(int y, int j):x(y),i(j){}
};

bool operator < (node a, node b) {
    return a.x < b.x;
}

int main(){
    int n;
    cin >> n;

    vector<node> vec;
    for(int i=1; i<=2*n; ++i){
        int x;
        cin >> x;
        vec.push_back(node(x, i));
    }

    sort(vec.begin(), vec.end());

    int left = 0, right = 1e9;
    while(left < right){
        int mid = (left + right + 1) / 2;
        bool valid = true;

        int current_left = 0;
        for(int i=0; i<2*n; ++i){
            if(vec[i].i <= n) current_left = i;

            if(vec[i].i > n && vec[i].x - vec[current_left].x < mid)
                valid = false;
        }

        if(valid) left = mid;
        else right = mid-1;
    }

    cout << left << endl;
}
