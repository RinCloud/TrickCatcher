import heapq

# read input
N, K = map(int, input().split())
sushi = []
for _ in range(N):
    t, d = map(int, input().split())
    sushi.append((t, d))

# sort the sushi by deliciousness in descending order
sushi.sort(key=lambda x: x[1], reverse=True)

# initialize variables
used_topping = set()
base_total_deliciousness = 0
variety_bonus = 0
max_satisfaction = 0
priority_queue = []

# calculate maximum satisfaction
for i in range(K):
    t, d = sushi[i]
    base_total_deliciousness += d
    if t in used_topping:
        heapq.heappush(priority_queue, d)
    else:
        used_topping.add(t)
    variety_bonus = len(used_topping)**2
    max_satisfaction = max(max_satisfaction, base_total_deliciousness + variety_bonus)

# try replacing existing sushi with higher deliciousness
for i in range(K, N):
    t, d = sushi[i]
    if t in used_topping:
        continue
    base_total_deliciousness += d
    used_topping.add(t)
    variety_bonus = len(used_topping)**2
    max_satisfaction = max(max_satisfaction, base_total_deliciousness + variety_bonus)

    # remove the least delicious sushi from the priority queue
    if priority_queue:
        least_deliciousness = heapq.heappop(priority_queue)
        base_total_deliciousness -= least_deliciousness
        variety_bonus = len(used_topping)**2
        max_satisfaction = max(max_satisfaction, base_total_deliciousness + variety_bonus)

print(max_satisfaction)