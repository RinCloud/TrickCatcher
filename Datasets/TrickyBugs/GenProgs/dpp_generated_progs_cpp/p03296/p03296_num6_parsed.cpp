#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> slimes(N);
    for (int i = 0; i < N; i++) {
        cin >> slimes[i];
    }
    
    int count = 0;
    map<int, int> countMap;
    for (int i = 0; i < N; i++) {
        countMap[slimes[i]]++;
        if (countMap[slimes[i]] > 1) {
            count++;
            countMap[slimes[i]] = 0;
        }
    }
    
    cout << count << endl;
    
    return 0;
}