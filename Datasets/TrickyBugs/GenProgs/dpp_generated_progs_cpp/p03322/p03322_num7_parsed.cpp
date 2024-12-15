#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    int N;
    string S;
    cin >> N >> S;

    // map to store the count of each prefix sum
    map<int, int> prefix_sum_count;
    
    // initialize prefix sum and count
    int prefix_sum = 0;
    int count = 0;
    
    // iterate over each symbol in the string
    for (char symbol : S) {
        // update prefix sum based on the symbol
        if (symbol == '+') {
            prefix_sum += 1;
        } else if (symbol == '-') {
            prefix_sum -= 1;
        } else if (symbol == '>') {
            prefix_sum += 1;
        } else if (symbol == '<') {
            prefix_sum -= 1;
        }
        
        // increment count of prefix sum in the map
        prefix_sum_count[prefix_sum]++;
        
        // if prefix sum is 0, increment the final count
        if (prefix_sum == 0) {
            count++;
        }
    }
    
    // iterate over the map to count the pairs
    int answer = 0;
    for (auto pair : prefix_sum_count) {
        int prefix_sum = pair.first;
        int prefix_sum_count = pair.second;
        
        // calculate pairs with prefix sum as 0
        if (prefix_sum == 0) {
            answer += (prefix_sum_count * (prefix_sum_count + 1)) / 2;
        } else {
            // calculate pairs with non-zero prefix sum
            answer += (prefix_sum_count * (prefix_sum_count - 1)) / 2;
        }
    }
    
    // print the answer
    cout << answer << endl;

    return 0;
}