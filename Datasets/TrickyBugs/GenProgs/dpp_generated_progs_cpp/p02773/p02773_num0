#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    // Create a map to store the count of each string
    map<string, int> count;
    
    // Read the input strings and update their counts in the map
    for (int i = 0; i < N; i++) {
        string S;
        cin >> S;
        count[S]++;
    }
    
    // Find the maximum count
    int maxCount = 0;
    for (auto it : count) {
        maxCount = max(maxCount, it.second);
    }
    
    // Print all strings with the maximum count in lexicographical order
    for (auto it : count) {
        if (it.second == maxCount) {
            cout << it.first << endl;
        }
    }
    
    return 0;
}