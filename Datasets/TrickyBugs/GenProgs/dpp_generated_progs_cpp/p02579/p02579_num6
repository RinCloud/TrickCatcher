#include<bits/stdc++.h> 
using namespace std;
#define ll long long int 

char maze[1001][1001];
bool visited[1001][1001];
int dist[1001][1001];

int dx[] = {0,0,1,-1};
int dy[] = {1,-1,0,0};

int H, W;

int main()
{
    cin>>H>>W;
    
    int C_h,C_w,D_h,D_w;
    cin>>C_h>>C_w>>D_h>>D_w;
    
    for(int i = 1; i <= H; i++)
    {
        for(int j = 1; j <= W; j++)
        {
            cin>>maze[i][j];
            visited[i][j] = false;
            
            dist[i][j] = -1;
        }
    }
    
    dist[C_h][C_w] = 0;
    
    queue<pair<int,int>> q;
    q.push({C_h,C_w});
    
    while(!q.empty())
    {
        pair<int,int> curr = q.front();
        q.pop();
        
        int x = curr.first;
        int y = curr.second;
        
        visited[x][y] = true;

        for(int i = 0; i < 4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];
            
            if(nx < 1 || nx > H || ny < 1 || ny > W) continue;
            
            if(maze[nx][ny] == '.' && dist[nx][ny] == -1)
            {
                dist[nx][ny] = dist[x][y];
                q.push({nx,ny});
            }
            else if(maze[nx][ny] == '#' && dist[nx][ny] == -1)
            {
                dist[nx][ny] = dist[x][y] + 1;
                q.push({nx,ny});
            }
        }
        
        for(int dx = -2; dx <= 2; dx++)
        {
            for(int dy = -2; dy <= 2; dy++)
            {
                int nx = x + dx;
                int ny = y + dy;
                
                if(nx < 1 || nx > H || ny < 1 || ny > W) continue;
                
                if(maze[nx][ny] == '.' && dist[nx][ny] == -1)
                {
                    dist[nx][ny] = dist[x][y] + 1;
                    q.push({nx,ny});
                }
            }
        }
    }
    
    cout<<dist[D_h][D_w];
    
    return 0;
}