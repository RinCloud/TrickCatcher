#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int maxl = 0;   // Initialize maxl to 0
    int sum = 0;
    for(int i=0;i<n;i++){
        int l;
        cin >> l;
        if (l > maxl) maxl = l;   // Update maxl if current side is greater
        sum += l;
    }
    if(maxl < (sum-maxl)) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
