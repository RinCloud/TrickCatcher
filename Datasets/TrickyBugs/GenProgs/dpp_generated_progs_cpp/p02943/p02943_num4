#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    string S;
    cin >> S;
    
    string T = S;
    reverse(T.begin(), T.end());
    string U = S + T;

    string minS = U;
    for(int i = 0; i < U.size(); i++) {
        string SPrime = U.substr(i, N);
        if(SPrime < minS) {
            minS = SPrime;
        }
    }

    string ans = minS;
    for(int i = 0; i < K-1; i++) {
        string T = ans;
        reverse(T.begin(), T.end());
        string U = ans + T;

        minS = U;
        for(int j = 0; j < U.size(); j++) {
            string SPrime = U.substr(j, N);
            if(SPrime < minS) {
                minS = SPrime;
            }
        }
        ans = minS;
    }
    
    cout << ans << endl;
    
    return 0;
}