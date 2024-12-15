#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    for(int i=0; i<h; i++) {
        cin >> s[i];
    }
    vector<vector<int>> cnt(h, vector<int>(w));
    
    // Count the number of unobstructed squares to the left of each square
    for(int i=0; i<h; i++) {
        int l = 0; // number of unobstructed squares so far
        for(int j=0; j<w; j++) {
            if(s[i][j] == '#') {
                for(int k=j-l; k<j; k++) {
                    cnt[i][k] += l;
                }
                l = 0;
            } else {
                l++;
            }
        }
    }
    
    // Count the number of unobstructed squares above each square
    for(int j=0; j<w; j++) {
        int l = 0; // number of unobstructed squares so far
        for(int i=0; i<h; i++) {
            if(s[i][j] == '#') {
                for(int k=i-l; k<i; k++) {
                    cnt[k][j] += l;
                }
                l = 0;
            } else {
                l++;
            }
        }
    }
    
    int answer = 0;
    // Find the maximum number of squares that can be lit up by a lamp
    for(int i=0; i<h; i++) {
        for(int j=0; j<w; j++) {
            int range = cnt[i][j] - 1;
            answer = max(answer, range);
        }
    }
    
    cout << answer << endl;
    return 0;
}