n, d = map(int, input().split())
distances = list(map(int, input().split()))
q = int(input())
queries = list(map(int, input().split()))

for query in queries:
    if distances[query - 1] >= d:
        print("YES")
    elif distances[query - 1] + distances[query] > d and distances[query] + distances[query + 1] > d:
        print("NO")
    else:
        print("YES")