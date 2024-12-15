#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, X;
    cin >> N >> X;
    
    vector<int> b(N), l(N), u(N);
    for (int i = 0; i < N; i++) {
        cin >> b[i] >> l[i] >> u[i];
    }
    
    long long sum_c = 0;
    for (int i = 0; i < N; i++) {
        sum_c += b[i] * l[i];
    }
    
    long long min_study_hours = 0;
    long long max_study_hours = X;
    
    while (min_study_hours < max_study_hours) {
        long long mid_study_hours = (min_study_hours + max_study_hours) / 2;
        
        long long sum_a = 0;
        for (int i = 0; i < N; i++) {
            long long study_time = min(mid_study_hours, X - b[i]);
            sum_a += u[i] * study_time + b[i] * l[i] - b[i] * study_time;
        }
        
        if (sum_a >= sum_c) {
            max_study_hours = mid_study_hours;
        } else {
            min_study_hours = mid_study_hours + 1;
        }
    }
    
    cout << min_study_hours << endl;
    
    return 0;
}