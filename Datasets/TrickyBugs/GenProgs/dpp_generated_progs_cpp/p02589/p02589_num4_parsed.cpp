#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

// Function to count the number of unordered pairs
int countUnorderedPairs(vector<string>& strings) {
    // Create a set to store the unique substrings
    unordered_set<string> substrings;
    
    // Iterate through each string
    for (const auto& s : strings) {
        // Remove the first character of the string
        string substring = s.substr(1);
        
        // Check if the substring is already in the set
        if (substrings.count(substring) > 0) {
            // If yes, return 1 as Limak can obtain one string from the other
            return 1;
        }
        
        // Insert the substring into the set
        substrings.insert(substring);
    }
    
    // If no unordered pair found, return 0
    return 0;
}

int main() {
    // Read the value of N
    int N;
    cin >> N;
    
    // Create a vector to store the strings
    vector<string> strings(N);
    
    // Read the strings
    for (int i = 0; i < N; i++) {
        cin >> strings[i];
    }
    
    // Count the number of unordered pairs
    int pairs = countUnorderedPairs(strings);
    
    // Print the result
    cout << pairs << endl;
    
    return 0;
}