# FUNCTION TO FIND PARENT NODE OF A ELEMENT IN DISJOINT SET
def find_parent(parent, x):
    if parent[x] != x:
        parent[x] = find_parent(parent, parent[x])
    return parent[x]

# FUNCTION TO UNION TWO SETS
def union(parent, rank, x, y):
    x_root = find_parent(parent, x)
    y_root = find_parent(parent, y)

    if rank[x_root] < rank[y_root]:
        parent[x_root] = y_root
    elif rank[x_root] > rank[y_root]:
        parent[y_root] = x_root
    else:
        parent[y_root] = x_root
        rank[x_root] += 1

# MAIN FUNCTION
def main():
    # Read input values
    N, M = map(int, input().split())
    cards = [0] * N

    # Create disjoint set
    parent = [i for i in range(N)]
    rank = [0] * N

    # Perform union operation based on given facts
    for _ in range(M):
        X, Y, Z = map(int, input().split())
        union(parent, rank, X - 1, Y - 1)

    # Count number of disjoint sets
    count = 0
    for i in range(N):
        if parent[i] == i:
            count += 1

    # Calculate minimum cost
    cost = count - 1

    # Print minimum cost
    print(cost)

# Call main function
if __name__ == "__main__":
    main()