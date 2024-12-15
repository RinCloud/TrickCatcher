n, k = map(int, input().split())
balls = list(map(int, input().split()))

counter = {}
for i in balls:
    if i not in counter:
        counter[i] = 1
    else:
        counter[i] += 1

balls_to_rewrite = sorted(counter.values(), reverse=True)[k:]
result = sum(balls_to_rewrite)
print(result)