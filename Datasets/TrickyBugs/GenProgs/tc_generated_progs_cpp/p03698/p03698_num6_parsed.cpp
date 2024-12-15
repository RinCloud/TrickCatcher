#include <iostream>
#include <cstring>
using namespace std;
int main(){
    int sum = 0; // Initialize sum to 0
    char s[100];
    cin >> s;
    
    for(int i = 0; i < strlen(s); i++){
        for(int j = i + 1; j < strlen(s); j++){
            if(s[i] == s[j]){
                sum++;
                break; // If a duplicate character is found, immediately break out of the inner loop
            }
        }
        // If a duplicate character is found, break out of the outer loop as well
        if(sum > 0){
            break;
        }
    }
    
    if(sum == 0){
        cout << "yes";
    }else{
        cout << "no";
    }
    
    return 0;
}