#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int a,b,k,N;
	int arr[105]={0};
	cin>>a>>N;
	for(int i=0;i<N;i++){
		cin>>k;
		arr[k]=1;
	}
	b=0;
	while(a-b>=0||a+b<=105){
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

// Additional explanation:
// We need to initialize the array arr to store the known numbers that are in the sequence. By default all elements 
// of arr will be 0, so that the non-existing numbers can be identified as 0, and the existing numbers can be 
// identified as 1. That is why I initialized arr to 0 using int arr[105]={0}