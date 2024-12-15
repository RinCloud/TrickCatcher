#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<pair<int, int>> bags(N);
    for (int i = 0; i < N; i++) {
        cin >> bags[i].first >> bags[i].second;
    }
    
    // Sort the bags based on one of the numbers in ascending order
    sort(bags.begin(), bags.end(), [](const pair<int, int>& a, const pair<int, int>& b){
        return a.first < b.first;
    });

    // Calculate the minimum difference between the red and blue balls
    long long min_diff = (long long) bags[N-1].first - bags[0].first;
    
    // Sort the bags based on the other number in ascending order
    sort(bags.begin(), bags.end(), [](const pair<int, int>& a, const pair<int, int>& b){
        return a.second < b.second;
    });

    // Calculate the minimum difference between the red and blue balls
    min_diff *= (long long) bags[N-1].second - bags[0].second;
    
    cout << min_diff << endl;
    
    return 0;
}