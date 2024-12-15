#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> Ds1(N);
    vector<int> Ds2(N);
    
    for (int i = 0; i < N; i++) {
        cin >> Ds1[i] >> Ds2[i];
    }
    
    for (int i = 0; i < N - 2; i++) {
        if (Ds1[i] == Ds2[i] && Ds1[i+1] == Ds2[i+1] && Ds1[i+2] == Ds2[i+2]) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    
    cout << "No" << endl;
    
    return 0;
}