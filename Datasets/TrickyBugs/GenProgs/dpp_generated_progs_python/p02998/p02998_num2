from collections import defaultdict

def max_operation(n, dots):
    count_x = defaultdict(int)
    count_y = defaultdict(int)

    for x, y in dots:
        count_x[x] += 1
        count_y[y] += 1
    
    max_count_x = max(count_x.values())
    max_count_y = max(count_y.values())
    
    if max_count_x < 2 or max_count_y < 2:
        return 0
    
    ans = 0
    for x, y in dots:
        if count_x[x] > 1 and count_y[y] > 1:
            ans += (max_count_x - 1) * (max_count_y - 1)
    
    return ans


n = int(input())
dots = []
for _ in range(n):
    x, y = map(int, input().split())
    dots.append((x, y))

result = max_operation(n, dots)
print(result)