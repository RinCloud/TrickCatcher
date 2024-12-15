from collections import defaultdict

def max_satisfaction(N, K, sushi):
    sushi_by_topping = defaultdict(list)
    for t, d in sushi:
        sushi_by_topping[t].append(d)

    for d_list in sushi_by_topping.values():
        d_list.sort(reverse=True)

    selected_sushi = []
    for _, d_list in sushi_by_topping.items():
        selected_sushi.extend(d_list[:K])

    selected_sushi.sort(reverse=True)
    total_deliciousness = sum(selected_sushi[:K])

    variety_bonus = len(set(t for t, _ in sushi[:K]))**2

    return total_deliciousness + variety_bonus


N, K = map(int, input().split())
sushi = [tuple(map(int, input().split())) for _ in range(N)]

max_satisfaction = max_satisfaction(N, K, sushi)
print(max_satisfaction)