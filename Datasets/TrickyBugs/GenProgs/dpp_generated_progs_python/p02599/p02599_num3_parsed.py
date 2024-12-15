N, Q = map(int, input().split())
colors = list(map(int, input().split()))

queries = []
for _ in range(Q):
    queries.append(list(map(int, input().split())))

distinct_colors = []
for query in queries:
    l, r = query
    distinct_colors.append(len(set(colors[l-1:r])))

for distinct_color in distinct_colors:
    print(distinct_color)