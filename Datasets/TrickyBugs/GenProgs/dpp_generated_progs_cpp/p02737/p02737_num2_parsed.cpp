#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

const long long MOD = 998244353;
const long long MAXN = 100000;

vector<int> adjX[MAXN+1];
vector<int> adjY[MAXN+1];
vector<int> adjZ[MAXN+1];

void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

int main() {
    int N;
    cin >> N;
    
    int M1;
    cin >> M1;
    for(int i=0; i<M1; i++){
        int a, b;
        cin >> a >> b;
        addEdge(adjX, a, b);
    }
    
    int M2;
    cin >> M2;
    for(int i=0; i<M2; i++){
        int c, d;
        cin >> c >> d;
        addEdge(adjY, c, d);
    }
    
    int M3;
    cin >> M3;
    for(int i=0; i<M3; i++){
        int e, f;
        cin >> e >> f;
        addEdge(adjZ, e, f);
    }
    
    long long ans = 0;
    
    for(int w=1; w<=N; w++){
        vector<bool> visX(N+1);
        vector<bool> visY(N+1);
        vector<bool> visZ(N+1);
        
        for(auto u: adjX[w]){
            visX[u] = true;
        }
        
        for(int x=1; x<=N; x++){
            if(x != w && !visX[x]){
                for(auto v: adjY[x]){
                    visY[v] = true;
                }
            }
        }
        
        for(int l=1; l<=N; l++){
            if(l != w){
                for(auto v: adjZ[l]){
                    visZ[v] = true;
                }
            }
        }
        
        for(int x=1; x<=N; x++){
            if(x != w && !visX[x]){
                for(int y=1; y<=N; y++){
                    if(y != x && !visY[y]){
                        for(int z=1; z<=N; z++){
                            if(z != w && !visZ[z]){
                                int power = x + y + z;
                                long long weight = pow(10, 18 * power);
                                weight %= MOD;
                                ans += weight;
                                ans %= MOD;
                            }
                        }
                    }
                }
            }
        }
    }
    
    cout << ans << endl;
    
    return 0;
}