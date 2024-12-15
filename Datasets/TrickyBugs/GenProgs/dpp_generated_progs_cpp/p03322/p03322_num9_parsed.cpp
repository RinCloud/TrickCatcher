#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int N;
    string S;
    cin >> N >> S;
    
    unordered_map<int, int> count;
    int result = 0;
    
    int P = 0;
    int sum = 0;
    
    for (int i = 0; i < N; i++) {
        if (S[i] == '-') {
            sum--;
        } else if (S[i] == '+') {
            sum++;
        } else if (S[i] == '>') {
            P++;
        } else if (S[i] == '<') {
            P--;
        }
        
        if (sum == 0 && count.find(P) != count.end()) {
            result += count[P];
        }
        
        count[P]++;
    }
    
    cout << result << endl;
    
    return 0;
}