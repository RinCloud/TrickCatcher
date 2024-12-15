def is_plan_feasible(N, D, distances, Q, plans):
    for i in range(Q):
        new_distances = distances.copy()
        new_distances[plans[i]-1] = D + 1
        current_distance = 0
        for j in range(N):
            current_distance += new_distances[j]
            if current_distance >= D:
                break
        if current_distance >= D:
            print("YES")
        else:
            print("NO")


# Read input
N, D = map(int, input().split())
distances = list(map(int, input().split()))
Q = int(input())
plans = list(map(int, input().split()))

# Check if plans are feasible
is_plan_feasible(N, D, distances, Q, plans)