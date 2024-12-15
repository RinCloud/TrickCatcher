from collections import Counter

def query_colors(N, Q, c, queries):
    # Initialize a dictionary to store the count of each color
    colors = Counter(c)
    
    # Initialize a list to store the result of each query
    result = []
    
    # Process each query
    for query in queries:
        l, r = query
        
        # Get the colors in the range [l, r]
        colors_in_range = set(c[l-1:r])
        
        # Count the number of different colors in the range
        different_colors = len(colors_in_range)
        
        # Add the result to the result list
        result.append(different_colors)
    
    return result

# Read input
N, Q = map(int, input().split())
c = list(map(int, input().split()))
queries = [tuple(map(int, input().split())) for _ in range(Q)]

# Perform queries and print the result
for result in query_colors(N, Q, c, queries):
    print(result)