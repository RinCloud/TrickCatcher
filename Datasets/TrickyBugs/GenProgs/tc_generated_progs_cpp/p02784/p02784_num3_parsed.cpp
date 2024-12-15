#include <iostream>
using namespace std;

int main() {
    int a,b,tmp,tot = 0; // added initialization of `tot` variable
    cin >> a >> b;
    while(b--){
        cin >> tmp;
        tot+=tmp;
    }
    if(tot>=a) cout << "Yes" << endl; // changed "Yes\n" to "Yes"
    else cout << "No" << endl; // changed "No\n" to "No"
}
