def is_feasible(N, D, distance_list, Q, plan_list):
    cumulative_distance = 0
    for distance in distance_list:
        cumulative_distance += distance
        if cumulative_distance >= D:
            break
    
    result = []
    for plan in plan_list:
        if cumulative_distance >= D or distance_list[plan-1] > D:
            result.append("YES")
        else:
            result.append("NO")
        
        cumulative_distance -= (distance_list[plan-1] - D)
        if cumulative_distance >= D:
            break
    
    return result


N, D = map(int, input().split())
distance_list = list(map(int, input().split()))
Q = int(input())
plan_list = list(map(int, input().split()))

result = is_feasible(N, D, distance_list, Q, plan_list)
for res in result:
    print(res)