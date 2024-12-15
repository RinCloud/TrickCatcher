from heapq import heappush, heappop

def solve(H, W, C, A):
    dist = [[float('inf')] * 10 for _ in range(10)]
    for i in range(10):
        for j in range(10):
            for k in range(10):
                dist[j][k] = min(dist[j][k], dist[j][i] + dist[i][k])
    
    ans = 0
    for i in range(H):
        for j in range(W):
            if A[i][j] != -1:
                ans += dist[A[i][j]][1]
    
    return ans

H, W = map(int, input().split())
C = [list(map(int, input().split())) for _ in range(10)]
A = [list(map(int, input().split())) for _ in range(H)]

print(solve(H, W, C, A))