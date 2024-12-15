def can_win(H, N, A):
    dp = [False] * (H+1)
    dp[0] = True
    
    for i in range(1, H+1):
        for j in range(N):
            if i - A[j] >= 0 and dp[i - A[j]]:
                dp[i] = True
                break
    
    if dp[H]:
        print('Yes')
    else:
        print('No')
        
H, N = map(int, input().split())
A = list(map(int, input().split()))

can_win(H, N, A)