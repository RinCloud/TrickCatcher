#include<bits/stdc++.h>
using namespace std;

long long a[4];
int main(){
	for(int i = 1; i <= 3; i++)
	   cin >> a[i];
	sort(a+1,a+4);
	long long minimum_difference;
	if(a[3] % 2 == 1)
	   minimum_difference = a[1] * a[2];
	else
	   minimum_difference = 0;
	cout << minimum_difference << endl;
	return 0;
}
