#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<int> corrects(N+1, 0);
    vector<bool> solved(N+1, false);

    long long penalties = 0;

    for (int i = 0; i < M; i++) {
        int p;
        string s;
        cin >> p >> s;
        
        if (s == "AC") {
            if (!solved[p]) {
                corrects[p]++;
                solved[p] = true;
                penalties += corrects[p];
            }
        } else {
            if (!solved[p]) {
                corrects[p]--;
            }
        }
    }
    
    int numCorrects = 0;
    for (int i = 1; i <= N; i++) {
        if (solved[i]) {
            numCorrects++;
        }
    }
    
    cout << numCorrects << " " << penalties << endl;
    
    return 0;
}