#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isPossible(const vector<int>& a) {
    int n = a.size();
    
    vector<int> sorted_a = a;
    sort(sorted_a.begin(), sorted_a.end());

    int min_dist = sorted_a[0];
    int max_dist = sorted_a[n-1];
    int sum_dist = 0;
    for (int i = 0; i < n-1; i++) {
        sum_dist += sorted_a[i];
    }

    if (max_dist <= n-1 && sum_dist >= min_dist && sum_dist <= 2*(n-1)) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int N;
    cin >> N;
    
    vector<int> a(N);
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }
    
    if (isPossible(a)) {
        cout << "Possible" << endl;
    } else {
        cout << "Impossible" << endl;
    }

    return 0;
}