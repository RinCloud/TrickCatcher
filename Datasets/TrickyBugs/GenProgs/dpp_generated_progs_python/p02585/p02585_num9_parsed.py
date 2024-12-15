import sys
sys.setrecursionlimit(10**7)

def dfs(s):
    visited[s] = True
    
    curr = 0
    cycle = 0
    
    while True:
        v = p[s]
        curr += c[v]
        cycle += 1
        s = v
        
        if visited[s]:
            break
    
    # calculate score
    score = 0
    
    if curr > 0:
        k %= cycle
        score += curr * (k // cycle)
        
    if k > 0:
        max_score = 0
        
        for i in range(cycle):
            v = p[s]
            curr += c[v]
            max_score = max(max_score, curr)
            s = v
        
        score += max_score * (k // cycle)
        
        k %= cycle
        
        for i in range(k):
            v = p[s]
            score += c[v]
            s = v
    
    return score

n, k = map(int, input().split())
p = list(map(int, input().split()))
c = list(map(int, input().split()))
visited = [False] * (n + 1)

ans = -10**18

for i in range(1, n + 1):
    if not visited[i]:
        ans = max(ans, dfs(i))

print(ans)