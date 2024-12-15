#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> bricks(N);
    
    for(int i = 0; i < N; i++) {
        cin >> bricks[i];
    }
    
    unordered_map<int, int> counts;
    int count = 0;
    
    for(int i = 0; i < N; i++) {
        int num = bricks[i];
        if(counts.count(num - 1) > 0) {
            counts[num] = counts[num - 1] + 1;
        }
        else {
            counts[num] = 1;
        }
        
        count = max(count, counts[num]);
    }
    
    if(count < N) {
        cout << N - count << endl;
    }
    else {
        cout << -1 << endl;
    }
    
    return 0;
}