N, K = map(int, input().split())
P = list(map(int, input().split()))
C = list(map(int, input().split()))

max_score = float('-inf')

for i in range(N):
    piece = i
    visited = set()
    score = 0
    
    while piece not in visited:
        score += C[piece]
        visited.add(piece)
        piece = P[piece] - 1
        max_score = max(max_score, score)
        
print(max_score)