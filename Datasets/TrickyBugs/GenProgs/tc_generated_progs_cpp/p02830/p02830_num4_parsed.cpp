#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, i;
    cin >> a;
    char ar1[a+1], ar2[a+1];
    cin >> ar1 >> ar2;
    for (i = 0; i < a; i++)
        cout << ar1[i] << ar2[i];
    cout << endl;
    return 0;
}
