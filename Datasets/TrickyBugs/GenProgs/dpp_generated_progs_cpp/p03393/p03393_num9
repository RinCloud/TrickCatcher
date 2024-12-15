#include <iostream>
#include <string>
using namespace std;

string getNextDiverseWord(const string& word) {
    string nextWord = word;
    
    int n = word.length();
    
    for(int i = n-1; i >= 0; i--) {
        if(word[i] < 'z') {
            nextWord[i]++;
            for(int j = i+1; j < n; j++) {
                nextWord[j] = nextWord[j-1]+1;
            }
            return nextWord;
        }
    }
    
    return "-1";
}

int main() {
    string word;
    cin >> word;
    
    string nextWord = getNextDiverseWord(word);
    
    cout << nextWord << endl;
    
    return 0;
}