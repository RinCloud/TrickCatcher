N, M = map(int, input().split())

switches = [[] for _ in range(M)]
for i in range(M):
    k, *s = map(int, input().split())
    switches[i] = s
    
p = list(map(int, input().split()))

count = 0
for i in range(2**N):
    bulbs_on = [False] * M
    for j in range(N):
        if (i >> j) & 1 == 1:  # switch j is on
            for k in range(M):
                if j+1 in switches[k]:
                    bulbs_on[k] = not bulbs_on[k]
    if all(bulbs_on[k] == p[k] for k in range(M)):
        count += 1
        
print(count)