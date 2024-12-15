# Let's start by taking input for the number of vertices, N
N = int(input())

# Next, we need to take input for the edges, which are represented by a_i and b_i
edges = []
for _ in range(N-1):
    a, b = map(int, input().split())
    edges.append((a, b))

# Now, we take input for the number of restrictions, M
M = int(input())

# Next, we take input for the restrictions, which are represented by u_i and v_i
restrictions = []
for _ in range(M):
    u, v = map(int, input().split())
    restrictions.append((u, v))

# To solve this problem, we can use a recursive function that generates all possible combinations of edge colors
def count_ways(current, edges, restrictions):
    # Base case: if we have reached the end of the tree, check if all restrictions are satisfied
    if len(current) == N-1:
        for restriction in restrictions:
            u, v = restriction
            if (u in current) and (v in current):
                return 1
        return 0
    
    # Recursive case: try both white and black colors for the current edge
    a, b = edges[len(current)]
    return count_ways(current + [(a, b, "W")], edges, restrictions) + count_ways(current + [(a, b, "B")], edges, restrictions)

# Call the count_ways function to get the answer
answer = count_ways([], edges, restrictions)

# Print the answer
print(answer)