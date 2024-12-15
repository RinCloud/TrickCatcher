def max_satisfaction(N, K, sushi):
    sushi.sort(reverse=True, key=lambda x: x[1])

    kinds = []
    deliciousness = []
    for t, d in sushi:
        if t not in kinds:
            kinds.append(t)
            deliciousness.append(d)

    max_satisfaction = 0
    base_total_deliciousness = sum(deliciousness[:K])
    variety_bonus = len(kinds[:K])**2
    max_satisfaction = base_total_deliciousness + variety_bonus

    for i in range(K, N):
        if sushi[i][0] not in kinds[:K]:
            kind_idx = kinds.index(kinds[:K][-1])

            new_base_total_deliciousness = base_total_deliciousness - deliciousness[kind_idx] + sushi[i][1]
            new_variety_bonus = variety_bonus - len(kinds[:K])**2 + len(kinds[:K])**2

            max_satisfaction = max(max_satisfaction, new_base_total_deliciousness + new_variety_bonus)

    return max_satisfaction


N, K = map(int, input().split())
sushi = []
for _ in range(N):
    t, d = map(int, input().split())
    sushi.append((t, d))

print(max_satisfaction(N, K, sushi))