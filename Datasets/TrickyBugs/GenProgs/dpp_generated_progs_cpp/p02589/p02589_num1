#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    unordered_map<string, int> freq;
    vector<string> strings(N);
    
    for (int i = 0; i < N; i++) {
        cin >> strings[i];
        freq[strings[i]]++;
    }
    
    int result = 0;
    for (int i = 0; i < N; i++) {
        freq[strings[i]]--;
        
        for (int j = 0; j < strings[i].length(); j++) {
            string prefix = strings[i].substr(0, j);
            string suffix = strings[i].substr(j + 1);
            
            string modifiedString = prefix + suffix;
            result += freq[modifiedString];
        }
        
        freq[strings[i]]++;
    }
    
    cout << result << endl;
    
    return 0;
}