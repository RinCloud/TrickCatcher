#include <bits/stdc++.h>
using namespace std;
 

// 解説を読んで
// Pの文字列を線形探索していく
// まったくソートできてない場合は「n - k + 1」となり
// 昇順にソートしている場合は上記数値をカウントダウンする。

int main(){
	int n,k;
	cin >> n >> k;

    vector<int> P(n);
    set<int> S;
    int count = 0; // add initialization
    int last = -1; // add initialization
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
			      // to remove value under p[i-k]
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