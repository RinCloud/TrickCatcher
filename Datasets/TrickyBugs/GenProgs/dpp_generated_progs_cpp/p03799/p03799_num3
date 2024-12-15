#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    long long N, M;
    cin >> N >> M;
    
    long long groups = min(N, M / 2);
    N -= groups;
    M -= groups * 2;
    
    groups += M / 4;
    
    cout << groups << endl;
    
    return 0;
}