#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int X, N;
	int arr[105] = {0};
	cin >> X >> N;
	for(int i=0; i<N; i++){
		int k;
		cin >> k;
		arr[k] = 1;
	}
	int b = 0;
	while(true){
		if(arr[X-b] != 1){
			cout << X-b;
			break;
		}
		else if(arr[X+b] != 1){
			cout << X+b;
			break;
		}
		b++;
	}
	return 0;
}
