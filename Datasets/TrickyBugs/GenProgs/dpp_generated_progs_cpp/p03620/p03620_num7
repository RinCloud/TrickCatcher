#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string A, B;
    cin >> A >> B;
    
    int n = A.length();
    
    vector<int> operations;
    
    for(int i = 0; i < n; i++){
        if(A == B)
            break;
        
        if(A[i] != B[i]){
            if(i + 1 < n){
                char temp = A[i];
                A[i] = A[i+1];
                A[i+1] = temp;
                
                operations.push_back(i+1);
            } else{
                cout << -1 << endl;
                return 0;
            }
        }
    }
    
    for(int i = 0; i < n; i++){
        if(A == B)
            break;
        
        if(B[i] == '1'){
            for(int j = i; j < n; j++){
                if(A == B)
                    break;
                A[j] = '1' - A[j] + '0';
                
                operations.push_back(j+1);
            }
        }
    }
    
    if(A != B){
        cout << -1 << endl;
    } else{
        cout << operations.size() << endl;
    }
    
    return 0;
}