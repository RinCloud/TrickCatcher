'''
def ball_bounce(N, X, L):
    count = 1 # Initialize count to 1, since the first bounce always happens at coordinate 0
    current_coordinate = 0
    
    for i in range(N):
        current_coordinate += L[i]
        if current_coordinate <= X:
            count += 1
    
    return count

N, X = map(int, input().split())
L = list(map(int, input().split()))

result = ball_bounce(N, X, L)
print(result)
'''