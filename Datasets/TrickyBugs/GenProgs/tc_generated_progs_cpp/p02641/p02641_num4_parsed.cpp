#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int a,b,k,N;
	int arr[105] = {0};
	cin>>a>>N;
	for(int i=0;i<N;i++){
		cin>>k;
		arr[k]=1;
	}
	b=0;
	while(true) {
		if(a-b >= 1 && arr[a-b] != 1){
			cout<<a-b;
			break;
		}
		else if(a+b <= 100 && arr[a+b] != 1){
			cout<<a+b;
			break;
		}
		b+=1;
	}

	return 0;
}
