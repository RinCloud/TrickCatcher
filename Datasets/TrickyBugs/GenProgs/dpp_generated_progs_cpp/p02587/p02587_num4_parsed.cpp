#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPalindrome(string s){
    int n = s.length();
    for(int i=0; i<n/2; i++){
        if(s[i] != s[n-i-1]){
            return false;
        }
    }
    return true;
}

long long solve(vector<pair<string, long long>>& strings){
    // Sort the strings based on cost in non-decreasing order
    sort(strings.begin(), strings.end(), [](const pair<string, long long>& a, const pair<string, long long>& b){
        return a.second < b.second;
    });
    
    // Check if any single string is a palindrome and return its cost
    for(auto& p : strings){
        if(isPalindrome(p.first)){
            return p.second;
        }
    }
    
    int n = strings.size();
    long long ans = 1e18;
    
    // Check all possible pairs of strings
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            // Concatenate the strings in both possible orders
            string str1 = strings[i].first + strings[j].first;
            string str2 = strings[j].first + strings[i].first;
            
            // Check if either concatenated string is a palindrome
            if(isPalindrome(str1)){
                ans = min(ans, strings[i].second + strings[j].second);
            }
            if(isPalindrome(str2)){
                ans = min(ans, strings[i].second + strings[j].second);
            }
        }
    }
    
    if(ans == 1e18){
        return -1;
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    
    vector<pair<string, long long>> strings(n);
    for(int i=0; i<n; i++){
        cin >> strings[i].first >> strings[i].second;
    }
    
    long long ans = solve(strings);
    cout << ans << endl;
    
    return 0;
}