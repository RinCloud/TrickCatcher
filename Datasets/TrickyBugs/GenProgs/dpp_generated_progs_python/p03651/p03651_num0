from itertools import combinations

def possible_to_reach_target(N, K, A):
    for i in range(2, N+1):
        for balls in combinations(A, i):
            new_balls = []
            for pair in combinations(balls, 2):
                diff = abs(pair[0] - pair[1])
                new_balls.append(diff)
            A += new_balls
            if K in A:
                return "POSSIBLE"
    return "IMPOSSIBLE"

# Read input
N, K = map(int, input().split())
A = list(map(int, input().split()))

# Call the function and print the result
print(possible_to_reach_target(N, K, A))