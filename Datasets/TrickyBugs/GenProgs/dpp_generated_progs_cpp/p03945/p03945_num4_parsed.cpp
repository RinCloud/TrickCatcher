#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    string S;
    cin >> S;

    int n = S.length();
    int count = 0;

    for(int i=0; i<n-1; i++) {
        if(S[i] != S[i+1]) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}