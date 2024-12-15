def calculate_sand(x, k, r, q, queries):
    a = x // 2
    b = x - a
    sand_a = a
    sand_b = b
    i = 0
    for t, a_i in queries:
        while i < k and t >= r[i]:
            sand_a, sand_b = sand_b, sand_a
            i += 1
        if a_i <= sand_a:
            sand_a -= a_i
        else:
            sand_b -= (a_i - sand_a)
            sand_a = 0
        print(sand_a)

x = int(input())
k = int(input())
r = list(map(int, input().split()))
q = int(input())
queries = []
for _ in range(q):
    t, a = map(int, input().split())
    queries.append((t, a))

calculate_sand(x, k, r, q, queries)