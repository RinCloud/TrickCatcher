#include<iostream>
using namespace std;

int main(){
    long long int N, M;
    cin >> N >> M;
    
    long long int maxGroup = min(N, M/2);
    
    cout << maxGroup << endl;
    
    return 0;
}