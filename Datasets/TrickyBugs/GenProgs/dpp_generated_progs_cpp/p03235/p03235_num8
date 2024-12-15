#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> P(N);
    for(int i = 0; i < N; i++) {
        cin >> P[i];
    }
    
    vector<int> S(N, 0);
    for(int i = 0; i < N; i++) {
        int pos = P[i];
        S[pos-1] = 1;
    }
    
    vector<int> X, Y;
    for(int i = 0; i < N; i++) {
        if(S[i] == 0) {
            X.push_back(P[i]);
        } else {
            Y.push_back(P[i]);
        }
    }
    
    sort(X.begin(), X.end());
    sort(Y.begin(), Y.end());
    
    string goodString = "";
    
    int numHighX = 0;
    int numHighY = 0;
    
    for(int i = 0; i < N; i++) {
        if(X.size() > 0 && X.front() == i+1) {
            X.erase(X.begin());
            numHighX++;
        }
        
        if(Y.size() > 0 && Y.front() == i+1) {
            Y.erase(Y.begin());
            numHighY++;
        }
        
        if(numHighX != numHighY) {
            goodString = "-1";
            break;
        }
        
        if(X.size() == 0 || Y.size() == 0) {
            if(X.size() == 0 && Y.size() == 0) {
                continue;
            } else {
                goodString += (X.size() != 0) ? "0" : "1";
            }
        } else {
            if(X.front() < Y.front()) {
                goodString += "0";
            } else {
                goodString += "1";
            }
        }
    }
    
    cout << goodString << endl;
    
    return 0;
}