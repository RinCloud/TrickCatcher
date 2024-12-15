#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int a, N;
	int arr[105] = {0}; // Initialize array with 0
	cin>>a>>N;
	for(int i=0;i<N;i++){
		int k;
		cin>>k;
		arr[k]=1;
	}
	int b=0;
	while(a-b>=0||a+b<=105){
		if(a-b >= 0 && arr[a-b]!=1){ // Check if a-b is within range and is not in the sequence
			cout<<a-b;
			break;
		}
		else if(a+b <= 105 && arr[a+b]!=1){ // Check if a+b is within range and is not in the sequence
			cout<<a+b;
			break;
		}
		b+=1;
	}
}
