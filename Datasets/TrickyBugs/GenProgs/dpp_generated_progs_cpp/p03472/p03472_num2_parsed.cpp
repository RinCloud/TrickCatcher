#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int, int> a, pair<int, int> b){
    return a.second < b.second;
}

int main(){
    int N, H;
    cin >> N >> H;
    
    vector<pair<int, int>> katanas(N);
    for(int i=0; i<N; i++){
        cin >> katanas[i].first >> katanas[i].second;
    }
    
    sort(katanas.begin(), katanas.end(), compare);
    
    int total_attacks = 0;
    int damage = 0;
    for(int i=N-1; i>=0; i--){
        if(H <= damage){
            break;
        }
        
        if(katanas[i].second > katanas[i].first){
            total_attacks += (H - damage + katanas[i].second - 1) / katanas[i].second;
            break;
        }
        else{
            total_attacks++;
            damage += katanas[i].first;
        }
    }
    
    cout << total_attacks << endl;
    
    return 0;
}