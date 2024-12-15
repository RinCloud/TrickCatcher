#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> a(N);
    for(int i = 0; i < N; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    bool flag = true;
    if(a[N-1] > N-1) {
        flag = false;
    }
    int sum = 0;
    for(int i = 0; i < N-1; i++) {
        sum += a[i];
    }
    if(sum < a[N-1]) {
        flag = false;
    }
    if(a[0] == 1 && count(a.begin(), a.end(), 1) == 1) {
        flag = false;
    }
    if(flag) {
        cout << "Possible" << endl;
    } else {
        cout << "Impossible" << endl;
    }
    return 0;
}