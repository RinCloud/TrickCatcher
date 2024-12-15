# Program

def checked_pattern_desires(N, K, desires):
    black_count = [[0]*(2*K) for _ in range(2*K)]
    white_count = [[0]*(2*K) for _ in range(2*K)]
    
    for x, y, c in desires:
        x %= 2*K
        y %= 2*K
        if x >= K:
            x -= K
            if y >= K:
                y -= K
                black_count[x][y] += 1
            else:
                white_count[x][y] += 1
        else:
            if y >= K:
                y -= K
                white_count[x][y] += 1
            else:
                black_count[x][y] += 1
    
    for i in range(2*K):
        for j in range(1, 2*K):
            black_count[i][j] += black_count[i][j-1]
            white_count[i][j] += white_count[i][j-1]
        for j in range(2*K):
            if i > 0:
                black_count[i][j] += black_count[i-1][j]
                white_count[i][j] += white_count[i-1][j]
    
    res = 0
    for i in range(K):
        for j in range(K):
            cnt = 0
            cnt += black_count[i+K-1][j+K-1]
            if i > 0:
                cnt -= black_count[i-1][j+K-1]
            if j > 0:
                cnt -= black_count[i+K-1][j-1]
            if i > 0 and j > 0:
                cnt += black_count[i-1][j-1]
            res = max(res, cnt)
            cnt = 0
            cnt += white_count[i+K-1][j+K-1]
            if i > 0:
                cnt -= white_count[i-1][j+K-1]
            if j > 0:
                cnt -= white_count[i+K-1][j-1]
            if i > 0 and j > 0:
                cnt += white_count[i-1][j-1]
            res = max(res, cnt)
    
    return res

N, K = map(int, input().split())
desires = []
for _ in range(N):
    x, y, c = input().split()
    x = int(x)
    y = int(y)
    desires.append((x, y, c))

result = checked_pattern_desires(N, K, desires)
print(result)