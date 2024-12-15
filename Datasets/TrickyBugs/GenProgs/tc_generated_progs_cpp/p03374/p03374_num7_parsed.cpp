#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long long C;
    cin >> n >> C;

    vector<pair<long long, long long>> sushi(n);
    for(int i=0; i<n; i++){
        cin >> sushi[i].first >> sushi[i].second;
    }

    vector<long long> prefix_sum(n), right_suffix_sum(n);
    prefix_sum[0] = sushi[0].second - sushi[0].first;
    right_suffix_sum[n-1] = sushi[n-1].second - (C - sushi[n-1].first);
    for(int i=1; i<n; i++){
        prefix_sum[i] = prefix_sum[i-1] + sushi[i].second - sushi[i].first;
    }
    for(int i=n-2; i>=0; i--){
        right_suffix_sum[i] = right_suffix_sum[i+1] + sushi[i].second - (C - sushi[i].first);
    }
    
    long long max_calories = max(0LL, prefix_sum[n-1]);
    for(int i=0; i<n; i++){
        max_calories = max(max_calories, prefix_sum[i]);
        max_calories = max(max_calories, right_suffix_sum[i]);
        if(i < n-1){
            max_calories = max(max_calories, prefix_sum[i] + right_suffix_sum[i+1] - sushi[i].first);
        }
    }
    
    cout << max_calories << endl;

    return 0;
}
