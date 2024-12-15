N, M = map(int, input().split())
liked_count = [0] * M

for _ in range(N):
    foods = list(map(int, input().split()))[1:]
    for food in foods:
        liked_count[food - 1] += 1

result = liked_count.count(N)
print(result)