#include <iostream>
#include <string>

using namespace std;

int main() {
    int N, P;
    string S;

    cin >> N >> P;
    cin >> S;

    int count = 0;
    for(int i=0; i<N; i++) {
        int num = 0;
        for(int j=i; j<N; j++) {
            num = num*10 + (S[j]-'0');
            if(num % P == 0) {
                count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}