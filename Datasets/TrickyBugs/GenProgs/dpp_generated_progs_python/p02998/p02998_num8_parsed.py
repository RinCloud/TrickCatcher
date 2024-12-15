def max_operation(N, dots):
    x_count = {}
    y_count = {}
    for dot in dots:
        x, y = dot
        if x in x_count:
            x_count[x] += 1
        else:
            x_count[x] = 1
        if y in y_count:
            y_count[y] += 1
        else:
            y_count[y] = 1
    
    max_op = 0
    for dot in dots:
        x, y = dot
        if x_count[x] > 1 and y_count[y] > 1:
            max_op += 1
    
    return max_op

N = int(input())
dots = []
for _ in range(N):
    x, y = map(int, input().split())
    dots.append((x, y))

print(max_operation(N, dots))