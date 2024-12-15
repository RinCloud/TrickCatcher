from typing import List

def minimum_moves(N: int, M: int, X: List[int]) -> int:
    X.sort()
    distances = []
    for i in range(M-1):
        distances.append(X[i+1] - X[i])
    
    distances.sort(reverse=True)
    
    result = 0
    for i in range(N-1):
        result += distances[i]
    
    return result


# Read input
N, M = map(int, input().split())
X = list(map(int, input().split()))

# Call the function and print the result
print(minimum_moves(N, M, X))