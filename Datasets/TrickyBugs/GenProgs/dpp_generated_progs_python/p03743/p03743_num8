import bisect

def is_feasible(N, D, distances, Q, plans):
    prefix_sum = [0] * (N + 1)
    for i in range(1, N + 1):
        prefix_sum[i] = prefix_sum[i - 1] + distances[i - 1]
    
    left_max = [0] * (N + 1)
    right_max = [0] * (N + 1)
    for i in range(1, N + 1):
        left_max[i] = max(left_max[i - 1], prefix_sum[i - 1])
    for i in range(N, 0, -1):
        right_max[i] = max(right_max[i + 1], prefix_sum[N] - prefix_sum[i - 1])
    
    feasible_plans = []
    for plan in plans:
        index = bisect.bisect_left(prefix_sum, D - prefix_sum[plan - 1])
        if index <= N and right_max[index + 1] >= prefix_sum[N] - prefix_sum[plan - 1]:
            feasible_plans.append("NO")
        elif index >= 1 and left_max[index - 1] >= prefix_sum[plan - 1]:
            feasible_plans.append("NO")
        else:
            feasible_plans.append("YES")
    
    return feasible_plans

N, D = map(int, input().split())
distances = list(map(int, input().split()))
Q = int(input())
plans = list(map(int, input().split()))

result = is_feasible(N, D, distances, Q, plans)
for res in result:
    print(res)