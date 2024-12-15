def count_colors(N, Q, colors, queries):
    color_count = [0] * (N+1)
    distinct_colors = 0
    
    for i in range(1, N+1):
        if color_count[colors[i-1]] == 0:
            distinct_colors += 1
        color_count[colors[i-1]] += 1
    
    results = []
    
    for query in queries:
        l, r = query
        count = 0
        
        for i in range(1, N+1):
            if i < l or i > r:
                if color_count[colors[i-1]] > 0:
                    count += 1
        
        results.append(count)
    
    return results


# Example usage
N, Q = map(int, input().split())
colors = list(map(int, input().split()))
queries = [list(map(int, input().split())) for _ in range(Q)]

results = count_colors(N, Q, colors, queries)

for result in results:
    print(result)