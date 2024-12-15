#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, V;
    cin >> N >> V;
    
    vector<int> oases(N);
    for(int i = 0; i < N; i++) {
        cin >> oases[i];
    }
    
    vector<string> result(N);
    result[0] = "Possible";
    
    for(int i = 1; i < N; i++) {
        int diff = abs(oases[i] - oases[i-1]);
        if(diff <= V) {
            V -= diff;
            result[i] = "Possible";
        } else {
            result[i] = "Impossible";
        }
    }
    
    for(int i = N-2; i >= 0; i--) {
        int diff = abs(oases[i] - oases[i+1]);
        if(diff <= V) {
            V -= diff;
        } else {
            result[i] = "Impossible";
        }
    }
    
    for(int i = 0; i < N; i++) {
        cout << result[i] << endl;
    }
    
    return 0;
}