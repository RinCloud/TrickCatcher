#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;

    vector<pair<int, int>> segments(N);
    for(int i=0; i<N; i++){
        cin >> segments[i].first >> segments[i].second;
    }

    sort(segments.begin(), segments.end(), [](const pair<int, int>& a, const pair<int, int>& b){
        return a.second < b.second;
    });

    int total_distance = 0;
    int current_position = 0;
    for(int i=0; i<N; i++){
        total_distance += abs(current_position - segments[i].first);
        current_position = segments[i].second;
    }

    total_distance += abs(current_position);

    cout << total_distance << endl;

    return 0;
}