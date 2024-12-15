# Number of cells on the board
N = int(input())

# Adjacency list representation of the tree
adj_list = [[] for _ in range(N+1)]

# Read the input edges and construct the adjacency list
for _ in range(N-1):
    a, b = map(int, input().split())
    adj_list[a].append(b)
    adj_list[b].append(a)

# Initializing the black and white cell arrays
black = [False] * (N+1)
white = [False] * (N+1)

# Function to perform a depth-first search
def dfs(v, parent, color):
    if color == "black":
        black[v] = True
    else:
        white[v] = True
    for u in adj_list[v]:
        if u != parent:
            dfs(u, v, "white" if color == "black" else "black")

# Perform DFS starting from Cell 1, paint it black
dfs(1, -1, "black")

# Fennec always starts the game, so it's Fennec's turn initially
turn = "Fennec"

# Game loop
while True:
    # Variable to keep track of valid moves
    valid_moves = []

    if turn == "Fennec":
        # Check for uncolored cells adjacent to black cells
        for v in range(1, N+1):
            if black[v]:
                for u in adj_list[v]:
                    if not black[u] and not white[u]:
                        valid_moves.append(u)
        
    else:
        # Check for uncolored cells adjacent to white cells
        for v in range(1, N+1):
            if white[v]:
                for u in adj_list[v]:
                    if not black[u] and not white[u]:
                        valid_moves.append(u)

    # If there are no valid moves, the player loses and the other player wins
    if not valid_moves:
        if turn == "Fennec":
            print("Snuke")
        else:
            print("Fennec")
        break

    # Perform a valid move
    if turn == "Fennec":
        v = valid_moves[0]
        dfs(v, -1, "black")
        turn = "Snuke"
    else:
        v = valid_moves[0]
        dfs(v, -1, "white")
        turn = "Fennec"