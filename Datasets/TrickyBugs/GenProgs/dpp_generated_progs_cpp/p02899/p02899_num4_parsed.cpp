#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<pair<int, int>> students;
    for (int i = 0; i < N; i++) {
        int A;
        cin >> A;
        students.push_back(make_pair(A, i + 1));
    }
    
    sort(students.begin(), students.end());
    
    for (int i = 0; i < N; i++) {
        cout << students[i].second << " ";
    }
    
    return 0;
}