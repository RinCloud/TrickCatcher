#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isDisliked(int num, int *disliked, int k) {
    // Convert num to string.
    string numStr = to_string(num);
    
    // Check if any digit in numStr is in disliked array.
    for (int i = 0; i < numStr.length(); i++) {
        if (find(disliked, disliked + k, numStr[i] - '0') != disliked + k) {
            return true;
        }
    }
    
    return false;
}

int main() {
    int N, K;
    cin >> N >> K;
    
    int disliked[K];
    for (int i = 0; i < K; i++) {
        cin >> disliked[i];
    }
    
    int amount = N;
    while (isDisliked(amount, disliked, K)) {
        amount++;
    }
    
    cout << amount << endl;
    
    return 0;
}