#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    int totalGrade = 0;
    int maxGrade = 0;
    
    for (int i = 0; i < N; i++) {
        int score;
        cin >> score;
        
        totalGrade += score;
        maxGrade = max(maxGrade, score);
    }
    
    if ((totalGrade % 10) == 0) {
        totalGrade -= maxGrade;
    }
    
    cout << totalGrade << endl;
    
    return 0;
}