def good_string(N, P):
    S = [0]*N

    for i, p in enumerate(P):
        S[p-1] = i % 2
    
    cum = [0]*(N+1)
    for i in range(N):
        cum[i+1] = cum[i] + (1-S[i])

    ans = [-1]*N
    curr = 1
    for i, s in enumerate(S):
        if s == 0:
            ans[i] = curr
            curr += 1
            if curr > N:
                break
    
    stack = []
    for i, p in enumerate(P):
        while stack and (P[stack[-1]] < p or cum[i] < cum[stack[-1]]):
            pos = stack.pop()
            ans[pos] = ans[i]
        stack.append(i)
    
    if len(ans) < N:
        print(-1)
    else:
        print("".join([str(a) for a in ans]))

N = int(input())
P = list(map(int, input().split()))

good_string(N, P)


