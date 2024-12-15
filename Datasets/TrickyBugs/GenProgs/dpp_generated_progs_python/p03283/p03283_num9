# Takahashi Kingdom Railroads

from collections import Counter

def count_trains_within_section(n, m, q, trains, queries):
    # Create a list of counters for each city
    cities = [Counter() for _ in range(n+1)]
    
    # For each train, increment the counter for each city within the train's section
    for l, r in trains:
        for city in range(l, r+1):
            cities[city] += 1
    
    # For each query, get the sum of the counters within the given section
    counts = []
    for p, q in queries:
        count = sum(cities[city] for city in range(p, q+1))
        counts.append(count)
    
    return counts

# Read input
n, m, q = map(int, input().split())
trains = [tuple(map(int, input().split())) for _ in range(m)]
queries = [tuple(map(int, input().split())) for _ in range(q)]

# Count the trains within each section
counts = count_trains_within_section(n, m, q, trains, queries)

# Print the results
for count in counts:
    print(count)