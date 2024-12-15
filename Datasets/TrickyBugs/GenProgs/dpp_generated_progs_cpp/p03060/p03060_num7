#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> V(N);
    vector<int> C(N);

    for(int i=0; i<N; i++) {
        cin >> V[i];
    }

    for(int i=0; i<N; i++) {
        cin >> C[i];
    }

    int max_value = 0;

    for(int i=0; i<N; i++) {
        if(V[i] - C[i] > 0) {
            max_value += V[i] - C[i];
        }
    }

    cout << max_value << endl;

    return 0;
}