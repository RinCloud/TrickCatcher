#include <bits/stdc++.h>
using namespace std;

const int DIM = 1e3 + 5;

long long dst[DIM][DIM];

int main( void ) {
    
    int n, m;
    cin >> n >> m;
    
    for( int i = 1; i <= n; i ++ )
    for( int j = 1; j <= n; j ++ )
        if( i != j )
            dst[i][j] = numeric_limits<long long> :: min() / 2;
    
    for( int i = 1; i <= m; i ++ ) {
        int x, y, z;
        cin >> x >> y >> z;
        
        dst[x][y] = z;
    }
    
    for( int k = 1; k <= n; k ++ )
    for( int i = 1; i <= n; i ++ )
    for( int j = 1; j <= n; j ++ )
        dst[i][j] = max( dst[i][j], dst[i][k] + dst[k][j] );
    
    if( dst[1][n] > 0 ) {
        cout << "inf" << endl;
    } else {
        cout << dst[1][n] << endl;
    }
        
    return 0;
}
