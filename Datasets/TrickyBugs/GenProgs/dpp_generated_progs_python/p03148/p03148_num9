from collections import defaultdict


def max_satisfaction(n, k, sushi):
    sushi.sort(key=lambda x: x[1], reverse=True)

    kind_count = defaultdict(int)
    variety = 0
    base_total_deliciousness = 0

    for i in range(k):
        kind_count[sushi[i][0]] += 1
        base_total_deliciousness += sushi[i][1]

    variety = len(kind_count)
    variety_bonus = variety * variety

    max_satisfaction = base_total_deliciousness + variety_bonus

    for i in range(k, n):
        if sushi[i][0] not in kind_count or kind_count[sushi[i][0]] == 0:
            kind_count[sushi[i][0]] += 1
            base_total_deliciousness += sushi[i][1]

        new_variety = len(kind_count)
        new_variety_bonus = new_variety * new_variety

        new_satisfaction = base_total_deliciousness + new_variety_bonus

        max_satisfaction = max(max_satisfaction, new_satisfaction)

    return max_satisfaction


N, K = map(int, input().split())
sushi = []

for _ in range(N):
    t, d = map(int, input().split())
    sushi.append((t, d))

print(max_satisfaction(N, K, sushi))