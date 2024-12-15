from collections import defaultdict

def maximize_satisfaction(N, K, sushi):
    # Sort the sushi by decreasing deliciousness
    sushi.sort(key=lambda x: -x[1])
    
    # Calculate the base total deliciousness
    base_total_deliciousness = sum(sushi[i][1] for i in range(K))
    
    # Count the number of different kinds of toppings
    topping_counts = defaultdict(int)
    for i in range(K):
        topping_counts[sushi[i][0]] += 1
    
    # Calculate the variety bonus
    variety_bonus = sum(count ** 2 for count in topping_counts.values())
    
    # Calculate the maximum satisfaction
    max_satisfaction = base_total_deliciousness + variety_bonus
    
    return max_satisfaction

# Read the input
N, K = map(int, input().split())
sushi = []
for _ in range(N):
    t, d = map(int, input().split())
    sushi.append((t, d))

# Calculate and print the maximum satisfaction
max_satisfaction = maximize_satisfaction(N, K, sushi)
print(max_satisfaction)