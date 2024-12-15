#include<iostream>
#include<vector>
using namespace std;

int main(void){
    int n, k;
    cin >> n >> k;
    vector<int> A(n);
    for(int i=0; i<n; i++){
        cin >> A[i];
    }
    vector<int> s;
    vector<bool> seen(n+1, false);
    for(int i=0; i<n*k; i++){
        if(!seen[A[i%n]]){
            seen[A[i%n]] = true;
            s.push_back(A[i%n]);
        }
    }
    for(int i : s){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
