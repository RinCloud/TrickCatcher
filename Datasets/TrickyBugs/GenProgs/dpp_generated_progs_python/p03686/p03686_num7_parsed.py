# Taking input
N, M = map(int, input().split())
chairs = []
for _ in range(N):
    L, R = map(int, input().split())
    chairs.append((L, R))

# Sorting the chairs based on L values in ascending order
chairs.sort(key=lambda x: x[0])

# Getting the rightmost chair the last person can sit on
rightmost_chair = chairs[-1][1]

# Initializing required chairs to 0
required_chairs = 0

# Iterating through the chairs
for i in range(N-1):
    # If the current chair's right coordinate is greater than the next chair's left coordinate,
    # we need to add an additional chair at the maximum coordinate between the current and next chair
    if chairs[i][1] >= chairs[i+1][0]:
        required_chairs += max(0, chairs[i+1][1] - chairs[i][1])

# If the rightmost chair the last person can sit on is greater than M,
# we need to add additional chairs at the maximum coordinate between the rightmost chair and M
if rightmost_chair < M:
    required_chairs += M - rightmost_chair

# Printing the minimum required number of additional chairs
print(required_chairs)