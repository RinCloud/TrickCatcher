P, Q, R = map(int, input().split())
total_time = P + Q + R

# Consider all possible routes and update the minimum total time
if P + R < total_time:
    total_time = P + R
if P + Q < total_time:
    total_time = P + Q
if Q + R < total_time:
    total_time = Q + R

print(total_time)
