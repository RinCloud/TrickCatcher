#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;

    vector<int> P(n);
    set<int> S;
    int count = 1; //initialize count to 1
    int last = -1; //initialize last to -1
    int answer = n - k + 1;
    bool sorted = false;

    for (int i = 0; i < n; i++) {
        cin >> P[i];

        if (P[i] > last) {
            count++;
        } else {
            count = 1;
        }
        last = P[i];

        if (i >= k) {
            S.erase(P[i - k]);
        }

        if (count >= k) {
            sorted = true;
            answer--;
        } else if (i >= k
                  && P[i - k] < *S.begin() 
                  && P[i] > *S.rbegin()) {
            answer--;
        }
        S.insert(P[i]);
    }
    if (sorted) answer++;
    cout << answer << endl;
}