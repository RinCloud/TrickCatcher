N, L = map(int, input().split())
x = list(map(int, input().split()))
t = list(map(int, input(),split()))

def calculate_travel_time(L, x, t):
    travel_time = 0
    prev_time = 0
    prev_position = 0
    for i in range(N):
        travel_distance = abs(x[i] - prev_position)
        elapsed_time = prev_time + travel_distance
        if elapsed_time % (2 * L) >= L:
            elapsed_time += 2 * L - (elapsed_time % (2 * L))
        travel_time = max(travel_time, elapsed_time)
        shopping_time = t[i]
        travel_time += shopping_time
        prev_time = travel_time
        prev_position = x[i]
    travel_distance = abs(prev_position - L)
    elapsed_time = prev_time + travel_distance
    if elapsed_time % (2 * L) >= L:
        elapsed_time += 2 * L - (elapsed_time % (2 * L))
    travel_time = max(travel_time, elapsed_time)
    return travel_time

result = calculate_travel_time(L, x, t)
print(result)