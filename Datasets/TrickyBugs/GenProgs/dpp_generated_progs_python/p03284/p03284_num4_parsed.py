import math

N, K = map(int, input().split())

# calculate the minimum possible number of crackers each user can get
min_crackers = math.floor(N / K)

# calculate the remaining crackers after distributing equally
remaining_crackers = N % K

# add the remaining crackers to the users starting from the first user
for i in range(K):
    if remaining_crackers > 0:
        crackers_received = min_crackers + 1
        remaining_crackers -= 1
    else:
        crackers_received = min_crackers

# calculate the difference between the largest and smallest number of crackers received
difference = max(crackers_received) - min(crackers_received)

print(difference)