#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<string> strings(N);
    for (int i = 0; i < N; i++) {
        cin >> strings[i];
    }
    
    vector<int> count(26);
    long long answer = 0;
    
    for (int i = 0; i < N; i++) {
        fill(count.begin(), count.end(), 0);
        
        for (char c : strings[i]) {
            count[c - 'a']++;
        }
        
        for (int j = i + 1; j < N; j++) {
            int diff = 0;
            for (char c : strings[j]) {
                if (count[c - 'a'] == 0) {
                    diff++;
                } else {
                    count[c - 'a']--;
                }
            }
            if (diff == 1 || diff == 0) {
                answer++;
            }
        }
    }
    
    cout << answer << endl;
    
    return 0;
}