# Given the flight times P, Q, and R between the airports A, B, and C respectively, we need to find the minimum possible sum of flight times for a route starting from one airport, flying to another, and then flying to the remaining airport.

# We can find the minimum possible sum by comparing the sum of the flight times from A to B and B to C with the flight time from C to A (P + Q) and vice versa (Q + R) and taking the minimum of these two sums.

# Let's write the code to solve this problem.

def minimum_flight_time(P, Q, R):
    # Calculate the sums of the flight times for both routes
    route_1_time = P + Q
    route_2_time = Q + R

    # Find the minimum sum of flight times
    min_flight_time = min(route_1_time , route_2_time)
    
    return min_flight_time

# Read the flight times from input
P, Q, R = map(int, input().split())

# Calculate the minimum possible sum of flight times
result = minimum_flight_time(P, Q, R)

# Print the result
print(result)