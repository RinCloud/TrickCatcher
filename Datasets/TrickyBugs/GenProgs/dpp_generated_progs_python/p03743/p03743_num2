def is_feasible(N, D, distances, Q, plans):
    prefix_sum = [0]
    for i in range(N):
        prefix_sum.append(prefix_sum[-1] + distances[i])
    
    for i in range(Q):
        idx = plans[i]
        if prefix_sum[idx] - prefix_sum[0] <= D and D <= prefix_sum[-1] - prefix_sum[idx]:
            print("NO")
        else:
            print("YES")