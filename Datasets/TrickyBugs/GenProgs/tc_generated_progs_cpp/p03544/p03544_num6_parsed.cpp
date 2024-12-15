#include <iostream>
using namespace std;
long long l[87];
int n;
int main() {
    l[0]=2; l[1]=1;
    for (int i=2; i<=86; i++) l[i]=l[i-1]+l[i-2];
    
    cin >> n; cout << l[n]; 
}
