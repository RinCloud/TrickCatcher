def different_colors(N, Q, colors, queries):
    color_count = [0] * (N+1)
    prefix_count = [0] * (N+1)
    answer = []
    
    for color in colors:
        color_count[color] += 1
    
    for i in range(1, N+1):
        if color_count[i] > 0:
            prefix_count[i] = prefix_count[i-1] + 1
        else:
            prefix_count[i] = prefix_count[i-1]
    
    for query in queries:
        l, r = query
        answer.append(prefix_count[r] - prefix_count[l-1])
    
    return answer


# Read inputs
N, Q = map(int, input().split())
colors = list(map(int, input().split()))
queries = []
for _ in range(Q):
    queries.append(list(map(int, input().split())))

# Solve the problem and print the result
result = different_colors(N, Q, colors, queries)
for ans in result:
    print(ans)