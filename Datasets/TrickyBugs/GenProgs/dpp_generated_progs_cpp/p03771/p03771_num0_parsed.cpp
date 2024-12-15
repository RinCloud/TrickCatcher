#include<bits/stdc++.h>
using namespace std;

int main() {
    int N, V;
    cin>>N>>V;

    vector<int> x(N);
    for(int i=0; i<N; i++) {
        cin>>x[i];
    }

    vector<bool> possible(N, false);
    possible[0] = true;

    for(int i=0; i<N-1; i++) {
        int d = x[i+1]-x[i];

        if(d <= V) {
            V -= d;
        }
        else {
            V = V/2;
        }

        if(V > 0) {
            possible[i+1] = true;
        }
    }

    V = 0;

    for(int i=N-1; i>0; i--) {
        int d = x[i]-x[i-1];

        V = min(2*V, V+d);

        if(V > 0) {
            possible[i-1] = true;
        }
    }

    for(int i=0; i<N; i++) {
        if(possible[i]) {
            cout<<"Possible"<<endl;
        }
        else {
            cout<<"Impossible"<<endl;
        }
    }

    return 0;
}