#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isTreePossible(int N, vector<int>& a) {
    sort(a.begin(), a.end(), greater<int>()); // Sorting the sequence in descending order
    int sum = 0;
    
    // Checking if it is possible to construct the tree
    for (int i = 0; i < N-1; i++) {
        sum += a[i];
        if (sum <= i * (i + 1) / 2)
            return false;
    }
    
    return true;
}

int main() {
    int N;
    cin >> N;
    
    vector<int> a(N);
    for (int i = 0; i < N; i++)
        cin >> a[i];
    
    if (isTreePossible(N, a))
        cout << "Possible" << endl;
    else
        cout << "Impossible" << endl;
    
    return 0;
}