#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    unordered_map<int, int> countX;
    unordered_map<int, int> countY;
    
    for(int i=0; i<N; i++){
        int x, y;
        cin >> x >> y;
        countX[x]++;
        countY[y]++;
    }
    
    int maxOperations = 0;
    
    for(auto it=countX.begin(); it!=countX.end(); it++){
        maxOperations += (it->second)*(it->second-1)/2;
    }
    
    for(auto it=countY.begin(); it!=countY.end(); it++){
        maxOperations += (it->second)*(it->second-1)/2;
    }
    
    cout << maxOperations << endl;
    
    return 0;
}