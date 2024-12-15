#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<int> ac_count(N + 1), wa_count(N + 1);
    int correct_ans = 0, penalties = 0;
    
    for (int i = 0; i < M; i++) {
        int p;
        string S;
        cin >> p >> S;
        
        if (S == "AC") {
            if (ac_count[p] == 0) {
                correct_ans++;
                penalties += wa_count[p];
            }
            ac_count[p]++;
        } else {
            wa_count[p]++;
        }
    }
    
    cout << correct_ans << " " << penalties << endl;
    
    return 0;
}