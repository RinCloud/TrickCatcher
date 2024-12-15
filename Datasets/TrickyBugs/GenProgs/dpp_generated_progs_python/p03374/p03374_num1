def max_nutrition(N, C, sushi):
    sushi.append([C, 0])
    sushi.append([0, 0])
    sushi.sort()
    
    forward = [0] * (N + 2)
    backward = [0] * (N + 2)
    
    forward[0] = 0
    forward[1] = sushi[0][1]
    
    for i in range(2, N+2):
        forward[i] = forward[i-1] + sushi[i-1][1] - (sushi[i-1][0] - sushi[i-2][0])
    
    backward[N+1] = 0
    backward[N] = sushi[N+1][1]
    
    for i in range(N, 0, -1):
        backward[i] = backward[i+1] + sushi[i][1] - (sushi[i+1][0] - sushi[i][0])
    
    max_nutrition = max(forward[N+1], backward[0])
    
    for i in range(1, N+1):
        max_nutrition = max(max_nutrition, forward[i] + backward[i] - min(sushi[i][0], C - sushi[i][0]))
    
    return max_nutrition

N, C = map(int, input().split())

sushi = []
for _ in range(N):
    x, v = map(int, input().split())
    sushi.append([x, v])

result = max_nutrition(N, C, sushi)
print(result)