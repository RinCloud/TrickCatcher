# Program:

def shortest_distance(N, X, Y):
    # Calculate the shortest distance between vertex i and vertex j
    def calculate_distance(i, j):
        if i == j:
            return 0
        elif i < X <= j or j < X <= i:
            return min(j - i, abs(i - X) + abs(j - Y) + 1)
        elif i < Y <= j or j < Y <= i:
            return min(j - i, abs(i - Y) + abs(j - X) + 1)
        else:
            return abs(i - j)
    
    # Calculate the number of pairs with shortest distance k
    def calculate_pairs(k):
        count = 0
        for i in range(1, N+1):
            for j in range(i+1, N+1):
                if calculate_distance(i, j) == k:
                    count += 1
        return count
    
    # Print the number of pairs with shortest distance k for each k=1,2,...,N-1
    for k in range(1, N):
        print(calculate_pairs(k))
        

# Read the input
N, X, Y = map(int, input().split())

# Call the main function
shortest_distance(N, X, Y)