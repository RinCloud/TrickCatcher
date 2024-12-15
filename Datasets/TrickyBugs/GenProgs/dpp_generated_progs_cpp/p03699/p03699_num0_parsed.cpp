#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> scores(N);
    for(int i = 0; i < N; i++) {
        cin >> scores[i];
    }
    
    int max_grade = 0;
    int total = 0;
    
    for(int i = 0; i < N; i++) {
        total += scores[i];
        if(scores[i] % 10 != 0) {
            max_grade = max(max_grade, total);
        }
    }
    
    cout << max_grade << endl;
    
    return 0;
}