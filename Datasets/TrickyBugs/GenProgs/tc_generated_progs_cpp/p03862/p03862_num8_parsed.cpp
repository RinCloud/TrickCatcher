#include<iostream>
using namespace std;

int main(){
    long long n, x, m=0, z, y;
    cin >> n >> x;
    int a[n+2];
    a[0] = a[n+1] = 0;
    for(int i=1; i<=n; i++){
        cin >> a[i];
    }
    for(int i=1; i<=n; i++){
        z = a[i-1] + a[i] - x;
        if(z > 0){
            m += z;
            if(a[i-1] < z){
                a[i-1] = 0;
            }else{
                a[i-1] = a[i-1] - z;
            }
        }
        z = a[i] + a[i+1] - x;
        if(z > 0){
            m += z;
            if(a[i+1] < z){
                a[i+1] = 0;
            }else{
                a[i+1] = a[i+1] - z;
            }
        }
    }
    cout << m << endl;
    return 0;
}
