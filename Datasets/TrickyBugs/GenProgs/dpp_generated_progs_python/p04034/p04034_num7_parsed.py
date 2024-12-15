N, M = map(int, input().split())

balls = [1] + [0] * N
red_boxes = set([1])

for _ in range(M):
    x, y = map(int, input().split())
    
    balls[x] -= 1
    balls[y] += 1
    
    if x in red_boxes and balls[x] == 0:
        red_boxes.remove(x)
    
    if y not in red_boxes and balls[y] > 0:
        red_boxes.add(y)
        
print(len(red_boxes))
