import math

def find_max_gcd(N, M):
    if N == 1:
        return M
    
    gcd = 1
    for i in range(1, int(math.sqrt(M))+1):
        if M % i == 0:
            if i <= M // N:
                gcd = max(gcd, i)
            if M // i <= M // N:
                gcd = max(gcd, M // i)
                
    return gcd

# read input
N, M = map(int, input().split())

# find maximum possible gcd
ans = find_max_gcd(N, M)

# print output
print(ans)