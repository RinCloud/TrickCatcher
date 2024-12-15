def calculate_minimum_flight_time(P, Q, R):
    # check all possible routes and calculate the total flight time
    total_time = min(P + Q, Q + R, R + P)

    return total_time


# read input from standard input
P, Q, R = map(int, input().split())

# calculate and print the minimum flight time
min_flight_time = calculate_minimum_flight_time(P, Q, R)
print(min_flight_time)