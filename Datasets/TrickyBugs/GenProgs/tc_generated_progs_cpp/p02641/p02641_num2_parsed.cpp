#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int a,b,k,N;
	int arr[105] = {0}; // Initialize all elements to 0
	cin>>a>>N;
	for(int i=0;i<N;i++){
		cin>>k;
		arr[k]=1;
	}
	b=0;
	while(1){
		if(arr[a-b]!=1){
			cout<<a-b;
			break;
		}
		else if(arr[a+b]!=1){
			cout<<a+b;
			break;
		}
		b+=1;
	}
	

}
