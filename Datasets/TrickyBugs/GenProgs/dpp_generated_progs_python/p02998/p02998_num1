def solve(N, dots):
    x = [0] * (10**5+1)
    y = [0] * (10**5+1)
    for i in range(N):
        x[dots[i][0]] += 1
        y[dots[i][1]] += 1
    
    ans = 0
    for i in range(1, 10**5+1):
        ans += x[i] * (x[i]-1) // 2
        ans += y[i] * (y[i]-1) // 2
    
    return ans

# Read input
N = int(input())
dots = []
for _ in range(N):
    x, y = map(int, input().split())
    dots.append((x, y))

# Solve the problem
ans = solve(N, dots)

# Print the result
print(ans)