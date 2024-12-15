#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
    int N;
    cin>>N;
    
    unordered_set<char> colors;
    char arare_color;
    
    for(int i=0; i<N; i++){
        cin>>arare_color;
        colors.insert(arare_color);
    }
    
    if(colors.size()==3){
        cout<<"Three";
    }else{
        cout<<"Four";
    }
    
    return 0;
}