#include<iostream>
#include<vector>

using namespace std;

bool containsDislikedDigit(int amount, vector<int>& dislikedDigits) {
    while(amount > 0) {
        int digit = amount % 10;
        if(find(dislikedDigits.begin(), dislikedDigits.end(), digit) != dislikedDigits.end()) {
            return true;
        }
        amount /= 10;
    }
    return false;
}

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> dislikedDigits(K);
    for(int i = 0; i < K; i++) {
        cin >> dislikedDigits[i];
    }
    
    int amount = N;
    while(containsDislikedDigit(amount, dislikedDigits)) {
        amount++;
    }
    
    cout << amount << endl;
    
    return 0;
}