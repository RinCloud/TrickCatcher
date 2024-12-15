from collections import defaultdict

def max_satisfaction(N, K, sushi):
    sushi_dict = defaultdict(list)
    for topping, deliciousness in sushi:
        sushi_dict[topping].append(deliciousness)
    
    for topping in sushi_dict.keys():
        sushi_dict[topping].sort(reverse=True)

    max_satisfaction = 0
    for i in range(1, K+1):
        for toppings in combinations(sushi_dict.keys(), i):
            sorted_deliciousness = []
            for topping in toppings:
                sorted_deliciousness += sushi_dict[topping]
            sorted_deliciousness.sort(reverse=True)
            base_total_deliciousness = sum(sorted_deliciousness[:K])
            variety_bonus = len(toppings)**2
            satisfaction = base_total_deliciousness + variety_bonus
            max_satisfaction = max(max_satisfaction, satisfaction)
    
    return max_satisfaction


N, K = map(int, input().split())
sushi = []
for _ in range(N):
    t, d = map(int, input().split())
    sushi.append((t, d))

print(max_satisfaction(N, K, sushi))