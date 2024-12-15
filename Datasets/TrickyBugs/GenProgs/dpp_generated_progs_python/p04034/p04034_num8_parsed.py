# Program:

def red_ball_boxes(N, M, operations):
    red_ball_count = [0] * N
    red_ball_count[0] = 1
    
    for x, y in operations:
        red_ball_count[x-1] -= 1
        red_ball_count[y-1] += 1
        
        if red_ball_count[x-1] == 0:
            red_ball_count[x-1] = 0
            red_ball_count[y-1] = 1
    
    return red_ball_count.count(1)

# getting input from user
N, M = map(int, input().split())

operations = []
for _ in range(M):
    x, y = map(int, input().split())
    operations.append((x, y))

result = red_ball_boxes(N, M, operations)
print(result)