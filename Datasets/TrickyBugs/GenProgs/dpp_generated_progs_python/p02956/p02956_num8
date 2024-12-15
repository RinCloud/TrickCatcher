def sum_of_f_t(N, points):
    mod = 998244353
    
    def f(T):
        x_coords = [point[0] for point in T]
        y_coords = [point[1] for point in T]
        a = min(x_coords)
        b = max(x_coords)
        c = min(y_coords)
        d = max(y_coords)
        count = 0
        for i in range(N):
            if a <= points[i][0] <= b and c <= points[i][1] <= d:
                count += 1
        return count
    
    total_sum = 0
    for i in range(N):
        total_sum += f([points[i]])
        total_sum %= mod
    
    for i in range(N):
        for j in range(i + 1, N):
            total_sum += f([points[i], points[j]])
            total_sum %= mod
    
    return total_sum