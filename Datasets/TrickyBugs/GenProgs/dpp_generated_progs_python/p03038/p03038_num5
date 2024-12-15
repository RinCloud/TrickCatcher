import sys

def solve(N, M, A, queries):
    cardSum = sum(A)
    maxSum = cardSum

    for b, c in queries:
        cardSum += (c - A[b-1])
        maxSum = max(maxSum, cardSum)
        
    return maxSum

if __name__ == "__main__":
    N, M = map(int, input().split())
    A = list(map(int, input().split()))
    
    queries = []
    for _ in range(M):
        b, c = map(int, input().split())
        queries.append((b, c))
    
    result = solve(N, M, A, queries)
    print(result)