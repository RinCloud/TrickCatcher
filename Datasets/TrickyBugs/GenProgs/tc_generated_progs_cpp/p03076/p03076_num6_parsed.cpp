#include <iostream>
using namespace std;

int main() {
	int A, B, C, D, E;
	
	cin >> A >> B >> C >> D >> E;
	
	int ans = ( ( A + 9 ) / 10 * 10 ) + ( ( B + 9 ) / 10 * 10 ) + ( ( C + 9 ) / 10 * 10 ) + ( ( D + 9 ) / 10 * 10 ) + ( ( E + 9 ) / 10 * 10 );
	
	ans -= 10; // deduct 10 because of the waiting time for the first dish
	ans += max( { ( A + 9 ) % 10, ( B + 9 ) % 10, ( C + 9 ) % 10, ( D + 9 ) % 10, ( E + 9 ) % 10 } );
	
	cout << ans << endl;
	
	return 0;
}
