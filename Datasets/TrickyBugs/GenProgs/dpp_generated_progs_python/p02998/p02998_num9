from collections import defaultdict

def operation_possible(a, b, c, d, dots):
    if (a, b) in dots and (a, d) in dots and (c, b) in dots and (c, d) not in dots:
        return True
    elif (a, b) in dots and (a, d) in dots and (c, b) not in dots and (c, d) in dots:
        return True
    elif (a, b) in dots and (a, d) not in dots and (c, b) in dots and (c, d) in dots:
        return True
    elif (a, b) not in dots and (a, d) in dots and (c, b) in dots and (c, d) in dots:
        return True
    else:
        return False

def max_operations(N, dots):
    count = 0
    
    dots_set = set(dots)
    dots_dict = defaultdict(int)
    for dot in dots:
        dots_dict[dot] += 1
    
    for i in range(N):
        x_i, y_i = dots[i]
        for j in range(i+1, N):
            x_j, y_j = dots[j]
            a = (x_i, y_j)
            b = (x_j, y_i)
            c = (x_i, y_i)
            d = (x_j, y_j)
            
            add_dot = False
            if operation_possible(a, b, c, d, dots_set):
                count += 1
                add_dot = True
            
            if add_dot:
                dots_dict[a] += 1
                dots_dict[b] += 1
                dots_dict[c] += 1
                dots_dict[d] += 1
                dots_set.add(a)
                dots_set.add(b)
                dots_set.add(c)
                dots_set.add(d)
    
    return count

# read input
N = int(input())
dots = []
for _ in range(N):
    x, y = map(int, input().split())
    dots.append((x, y))

# calculate and print maximum number of operations
print(max_operations(N, dots))