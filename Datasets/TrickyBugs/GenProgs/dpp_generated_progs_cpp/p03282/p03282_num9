#include <iostream>
#include <string>

using namespace std;

// Function to get the character at K-th position after 5 * 10^15 days
char getKthChar(string S, long long K) {
    string result = "";
    
    for(int i=0; i<S.length(); i++) {
        if(S[i] == '2') result += "22";
        else if(S[i] == '3') result += "333";
        else if(S[i] == '4') result += "4444";
        else if(S[i] == '5') result += "55555";
        else if(S[i] == '6') result += "666666";
        else if(S[i] == '7') result += "7777777";
        else if(S[i] == '8') result += "88888888";
        else if(S[i] == '9') result += "999999999";
        else result += "1";
    }
    
    return result[K-1];
}

int main() {
    string S;
    long long K;
    
    // Reading input
    cin >> S;
    cin >> K;
    
    // Getting the K-th character
    char kthChar = getKthChar(S, K);
    
    // Printing the result
    cout << kthChar << endl;
    
    return 0;
}