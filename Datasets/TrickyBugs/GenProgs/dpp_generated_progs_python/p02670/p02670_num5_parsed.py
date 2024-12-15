def solve(N, P):
    # Create a 2D matrix to represent the cinema seats
    seats = [[0] * N for _ in range(N)]

    # Create a dictionary to store the position of each viewer
    position = {}

    # Fill in the initial positions of the viewers
    for i, p in enumerate(P):
        r = (p - 1) // N
        c = (p - 1) % N
        seats[r][c] = p
        position[p] = (r, c)

    # Initialize the count of pairs of viewers
    pairs = 0

    # Iterate over the viewers in the order they leave the cinema
    for p in P:
        r, c = position[p]

        # Check the adjacent seats and update the count of pairs
        if r > 0 and seats[r-1][c] > 0:
            pairs += 1
        if r < N-1 and seats[r+1][c] > 0:
            pairs += 1
        if c > 0 and seats[r][c-1] > 0:
            pairs += 1
        if c < N-1 and seats[r][c+1] > 0:
            pairs += 1

        # Mark the seat as empty
        seats[r][c] = 0

    return pairs


# Read the input values
N = int(input())
P = list(map(int, input().split()))

# Solve the problem
ans = solve(N, P)

# Print the result
print(ans)
