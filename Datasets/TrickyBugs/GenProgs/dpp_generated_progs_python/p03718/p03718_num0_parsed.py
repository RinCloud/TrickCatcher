import sys

def dfs(grid, visited, i, j):
    rows = len(grid)
    cols = len(grid[0])
    
    if visited[i][j]:
        return
    
    visited[i][j] = True
    
    # Check same row and column
    for k in range(rows):
        if grid[k][j] == "o":
            dfs(grid, visited, k, j)
            
    for k in range(cols):
        if grid[i][k] == "o":
            dfs(grid, visited, i, k)
            

def main():
    # Read the input
    H, W = map(int, sys.stdin.readline().split())
    grid = [list(sys.stdin.readline().rstrip()) for _ in range(H)]
    
    # Find the positions of S and T
    S_pos = None
    T_pos = None
    
    for i in range(H):
        for j in range(W):
            if grid[i][j] == "S":
                S_pos = (i, j)
            elif grid[i][j] == "T":
                T_pos = (i, j)
                
    # If either S or T is not found, exit
    if S_pos is None or T_pos is None:
        print("-1")
        return
    
    # Initialize the visited array
    visited = [[False] * W for _ in range(H)]
    
    # Perform DFS from S and mark all reachable squares
    dfs(grid, visited, S_pos[0], S_pos[1])
    
    # Count the number of leaves
    leaves = sum(row.count("o") for row in grid)
    
    # If the leaf T is not reachable, there is no solution
    if not visited[T_pos[0]][T_pos[1]]:
        print("-1")
        return
    
    # Find the number of leaves to remove
    remove = leaves - sum(visited[i][j] and grid[i][j] == "o" for i in range(H) for j in range(W))
    print(remove)
    return


if __name__ == "__main__":
    main()