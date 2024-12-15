#include <bits/stdc++.h>
using namespace std ;
int main()
{
   int a , b , c , d ;
   cin >> a >> b >> c >> d ;
   if((fabs(c-a) <= d)) {
        cout << "Yes" ;
   } else {
        if ((fabs(b-a) <= d) && (fabs(c-b) <= d)) {
            cout << "Yes" ;
        } else {
            cout << "No" ;
        }
   }


    return 0 ;
}
