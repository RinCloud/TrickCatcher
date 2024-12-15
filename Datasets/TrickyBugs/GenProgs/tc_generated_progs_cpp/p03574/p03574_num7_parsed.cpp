#include<bits/stdc++.h>
using namespace std;
int n,m,s,i,j;
char l[1001][1001];

// Function to check if indices are within the grid
bool valid(int x, int y) {
    return (x >= 0 && x < n && y >= 0 && y < m);
}

int main(void) {
    scanf("%d%d\n", &n, &m);
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            cin >> l[i][j];
    
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            s = 0;
            
            // Checking the nearby squares for bombs
            if (l[i][j] != '#') {
                if (valid(i, j+1) && l[i][j+1] == '#') s++;
                if (valid(i, j-1) && l[i][j-1] == '#') s++;
                if (valid(i+1, j) && l[i+1][j] == '#') s++;
                if (valid(i-1, j) && l[i-1][j] == '#') s++;
                if (valid(i+1, j+1) && l[i+1][j+1] == '#') s++;
                if (valid(i+1, j-1) && l[i+1][j-1] == '#') s++;
                if (valid(i-1, j+1) && l[i-1][j+1] == '#') s++;
                if (valid(i-1, j-1) && l[i-1][j-1] == '#') s++;
                
                printf("%d", s);
            }
            else 
                putchar('#');
        }
        printf("\n");
    }
}
