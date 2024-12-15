#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    int N, a, b;
    cin >> N >> a >> b;
    a--;
    b--;
    
    vector<pair<int,int>> pinholes(N);
    for (int i = 0; i < N; i++) {
        cin >> pinholes[i].first >> pinholes[i].second;
    }
    
    map<pair<int,int>, int> m;
    for (int i = 0; i < N; i++) {
        int dx = pinholes[i].first - pinholes[a].first;
        int dy = pinholes[i].second - pinholes[a].second;
        m[make_pair(dx, dy)]++;
    }
    
    int count = 0;
    for (int i = 0; i < N; i++) {
        int dx = pinholes[i].first - pinholes[b].first;
        int dy = pinholes[i].second - pinholes[b].second;
        count += m[make_pair(dx, dy)];
    }
    
    cout << count << endl;
    
    return 0;
}