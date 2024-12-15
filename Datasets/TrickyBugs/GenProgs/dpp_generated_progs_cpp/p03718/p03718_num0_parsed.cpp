#include<bits/stdc++.h>
using namespace std;

int main(){
    int H, W;
    cin >> H >> W;
    
    vector<vector<char>> pond(H, vector<char>(W));
    int S_row, S_col, T_row, T_col;
    
    // Taking input and finding the positions of S and T
    for(int i=0; i<H; i++){
        for(int j=0; j<W; j++){
            cin >> pond[i][j];
            if(pond[i][j] == 'S'){
                S_row = i;
                S_col = j;
            }
            else if(pond[i][j] == 'T'){
                T_row = i;
                T_col = j;
            }
        }
    }
    
    // If S and T are in the same row or column, no leaves need to be removed
    if(S_row == T_row || S_col == T_col){
        cout << 0 << endl;
        return 0;
    }
    
    int leaves_removed = 0;
    
    // Check if there is a leaf between S and T in the same row or column
    if(S_row < T_row){
        for(int i=S_row+1; i<T_row; i++){
            if(pond[i][S_col] == 'o'){
                leaves_removed++;
            }
        }
    }
    else{
        for(int i=S_row-1; i>T_row; i--){
            if(pond[i][S_col] == 'o'){
                leaves_removed++;
            }
        }
    }
    
    if(S_col < T_col){
        for(int j=S_col+1; j<T_col; j++){
            if(pond[S_row][j] == 'o'){
                leaves_removed++;
            }
        }
    }
    else{
        for(int j=S_col-1; j>T_col; j--){
            if(pond[S_row][j] == 'o'){
                leaves_removed++;
            }
        }
    }
    
    // If no leaves are removed, the objective is not achievable
    if(leaves_removed == 0){
        cout << -1 << endl;
    }
    else{
        cout << leaves_removed << endl;
    }
    
    return 0;
}