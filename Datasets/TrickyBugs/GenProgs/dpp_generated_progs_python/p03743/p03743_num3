from typing import List

def is_feasible_plan(N: int, D: int, distance_list: List[int], Q: int, plan_list: List[int]) -> List[str]:
    # calculate the current distance between Alice and destination
    current_distance = D

    # create a list to store the minimum distances at each step
    min_distances = [D] * (N+1)
    min_distances[N] = D

    # iterate through the list in reverse order
    for i in range(N-1, -1, -1):
        current_distance -= distance_list[i]
        min_distances[i] = min(current_distance, min_distances[i+1])

    # create a list to store the feasibility of each plan
    feasibility_list = []
    
    # check each plan
    for plan in plan_list:
        # check if rewriting the number will cause Alice to not reach the destination
        if min_distances[plan] - distance_list[plan-1] < min_distances[plan+1]:
            feasibility_list.append("NO")
        else:
            feasibility_list.append("YES")

    return feasibility_list


# read input
N, D = map(int, input().split())
distance_list = list(map(int, input().split()))
Q = int(input())
plan_list = list(map(int, input().split()))

# check the feasibility of each plan
result = is_feasible_plan(N, D, distance_list, Q, plan_list)

# print the result
for res in result:
    print(res)