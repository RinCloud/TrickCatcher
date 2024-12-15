#include <iostream>

using namespace std;

int main(){
    int W, H, N;
    cin >> W >> H >> N;
    
    bool grid[W+1][H+1];
    
    for(int i=0; i<=W; i++){
        for(int j=0; j<=H; j++){
            grid[i][j] = true;
        }
    }
    
    for(int i=0; i<N; i++){
        int x, y, a;
        cin >> x >> y >> a;
        
        if(a == 1){
            for(int j=0; j<x; j++){
                for(int k=0; k<=H; k++){
                    grid[j][k] = false;
                }
            }
        }
        else if(a == 2){
            for(int j=x+1; j<=W; j++){
                for(int k=0; k<=H; k++){
                    grid[j][k] = false;
                }
            }
        }
        else if(a == 3){
            for(int j=0; j<=W; j++){
                for(int k=0; k<y; k++){
                    grid[j][k] = false;
                }
            }
        }
        else if(a == 4){
            for(int j=0; j<=W; j++){
                for(int k=y+1; k<=H; k++){
                    grid[j][k] = false;
                }
            }
        }
    }
    
    int white_area = 0;
    for(int i=0; i<=W; i++){
        for(int j=0; j<=H; j++){
            if(grid[i][j]){
                white_area++;
            }
        }
    }
    
    cout << white_area << endl;
    
    return 0;
}