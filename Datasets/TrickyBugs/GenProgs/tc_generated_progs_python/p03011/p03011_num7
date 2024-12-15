The code provided is incorrect and may produce incorrect output for some test cases. 

The code sorts the input values in ascending order and then calculates the sum of the first two sorted values. However, this approach does not guarantee the minimum sum of the flight times. 

To solve the problem, we need to consider all possible routes and calculate their flight times. The minimum sum of flight times will be the minimum of all possible route sums.

Here is the corrected code:

P, Q, R = map(int, input().split())

# Calculate the sum of flight times for each possible route
route1 = P + Q
route2 = Q + R
route3 = R + P

# Find the minimum sum of flight times
min_sum = min(route1, route2, route3)

print(min_sum)