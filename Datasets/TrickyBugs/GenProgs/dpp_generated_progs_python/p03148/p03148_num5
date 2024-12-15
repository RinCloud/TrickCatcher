from itertools import combinations

def max_satisfaction(N, K, sushi):
    max_satisfaction = 0

    # Generate all possible combinations of K sushi pieces
    combinations = list(combinations(sushi, K))
    
    # Iterate through each combination and calculate satisfaction
    for combo in combinations:
        total_deliciousness = 0
        variety = set()

        # Calculate total deliciousness and variety bonus
        for s in combo:
            total_deliciousness += s[1]
            variety.add(s[0])
        
        # Calculate satisfaction
        satisfaction = total_deliciousness + (len(variety) ** 2)
        
        # Update maximum satisfaction if current satisfaction is greater
        if satisfaction > max_satisfaction:
            max_satisfaction = satisfaction
    
    return max_satisfaction


# Read input values
N, K = map(int, input().split())
sushi = []
for _ in range(N):
    t, d = map(int, input().split())
    sushi.append((t, d))

# Call the function and print the result
result = max_satisfaction(N, K, sushi)
print(result)