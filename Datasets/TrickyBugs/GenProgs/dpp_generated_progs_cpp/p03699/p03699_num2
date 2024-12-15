#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    int s[N];
    for (int i = 0; i < N; i++) {
        cin >> s[i];
    }
    
    sort(s, s + N);
    
    int sum = 0;
    for (int i = 0; i < N; i++) {
        sum += s[i];
    }
    
    int maxGrade = sum;
    if (sum % 10 == 0) {
        for (int i = 0; i < N; i++) {
            if (s[i] % 10 != 0) {
                maxGrade = sum - s[i];
                break;
            }
        }
    }
    
    cout << maxGrade << endl;
    
    return 0;
}