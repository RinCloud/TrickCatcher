def minPath(grid, k):
    N = len(grid)
    # create a visited matrix to keep track of visited cells
    visited = [[False]*N for _ in range(N)]
    
    # find the starting cell with the minimum value
    min_value = float('inf')
    start = (0,0)
    
    for i in range(N):
        for j in range(N):
            if grid[i][j] < min_value:
                min_value = grid[i][j]
                start = (i, j)
    
    # mark the starting cell as visited
    visited[start[0]][start[1]] = True
    
    # create a list to store the path
    path = [min_value]
    
    # create a queue to perform a Breadth-First Search
    q = [(start, path)]
    
    # process the queue until path length is equal to k
    while len(q[0][1]) != k:
        cell, path = q.pop(0)
        
        # get the neighbors of the current cell
        neighbors = [(cell[0]+1, cell[1]), (cell[0]-1, cell[1]), (cell[0], cell[1]+1), (cell[0], cell[1]-1)]
        
        for neighbor in neighbors:
            c = neighbor[0]
            r = neighbor[1]
            
            # check if the neighbor is within the grid and not visited
            if c >= 0 and c < N and r >= 0 and r < N and not visited[c][r]:
                # mark the neighbor as visited
                visited[c][r] = True
                # add the value of the neighbor to the path
                p = path + [grid[c][r]]
                # add the neighbor and the path to the queue
                q.append((neighbor, p))
    
    return q[0][1]