def find_max_x_minus_y(N, values, costs):
    max_x_minus_y = 0
    for i in range(N):
        x_minus_y = values[i] - costs[i]
        if x_minus_y > 0:
            max_x_minus_y += x_minus_y
    return max_x_minus_y

N = int(input())
values = list(map(int, input().split()))
costs = list(map(int, input().split()))

print(find_max_x_minus_y(N, values, costs))