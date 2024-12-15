#include<iostream>
#include<algorithm>
#include<cmath>
 
using namespace std;
 
int main() {
    int N;
    cin >> N;
    int a[N];
 
    for(int i=0; i<N; i++) {
        cin >> a[i];
    }
 
    int S = 0;
    int R = 0;
 
    sort(a, a+N);
 
    for(int i=0; i<N; i++) {
        if(i%2 == 0) {
            S += a[i];
        } else {
            R += a[i];
        }
    }
 
    cout << abs(S - R) << endl;
 
    return 0;
}