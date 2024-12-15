#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
    int N, P;
    string S;
    cin >> N >> P >> S;
    
    vector<int> counts(P, 0);
    int current = 0;
    long long answer = 0;
    int factor = 1;
    
    for(int i = N-1; i >= 0; i--){
        current = (current + (S[i]-'0')*factor) % P;
        counts[current]++;
        answer += counts[current];
        factor = (factor*10) % P;
    }
    
    cout << answer << endl;
    
    return 0;
}