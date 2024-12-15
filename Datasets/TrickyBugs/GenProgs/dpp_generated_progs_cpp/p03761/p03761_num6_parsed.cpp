#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <string>
using namespace std;

int countCharacters(vector<string>& words, string chars) {
    int res = 0;
    vector<int> cnt(26);
    for (char c : chars) ++cnt[c - 'a'];
    for (string word : words) {
        vector<int> cnt1 = cnt;
        bool good = true;
        for (char c : word) {
            if (--cnt1[c - 'a'] < 0) {
                good = false;
                break;
            }
        }
        if (good) res += word.size();
    }
    return res;
}

string getLongestString(vector<string>& words) {
    string chars = "";
    for(auto word: words){
        sort(word.begin(),word.end());
        chars += word;
    }
    sort(chars.begin(),chars.end());
    unordered_set<string> uniqueStrs;
    for(int i=0;i<=chars.size();++i){
        for(int j=1;j<=chars.size()-i;++j){
            string subStr = chars.substr(i,j);
            uniqueStrs.insert(subStr);
        }
    }
    string longestString = "";
    for(auto it=uniqueStrs.begin();it!=uniqueStrs.end();++it){
        vector<string> tempVec;
        for(auto word: words){
            string tempWord = word;
            string tempSubStr = *it;
            bool exists = true;
            for(auto subIt=tempSubStr.begin();subIt!=tempSubStr.end();++subIt){
                if(tempWord.find(*subIt) == string::npos){
                    exists = false;
                    break;
                }
                else{
                    tempWord.erase(tempWord.find(*subIt),1);
                }
            }
            if(exists){
                tempVec.push_back(*it);
            }
        }
        if((int)(*it).size() > (int)longestString.size()){
            longestString = *it;
        }
        else if((int)(*it).size() == (int)longestString.size()){
            if(*it < longestString){
                longestString = *it;
            }
        }
    }
    return longestString;
}

int main(){
    int n;
    cin >> n;
    vector<string> words(n);
    for(int i=0;i<n;++i){
        cin >> words[i];
    }
    string longestString = getLongestString(words);
    cout << longestString << endl;
    return 0;
}