# Given input
N = int(input())
jobs = []
for _ in range(N):
    A, B = map(int, input().split())
    jobs.append((A, B))

# Sort jobs by their deadlines in ascending order
jobs.sort(key=lambda x: x[1])

# Initialize current time and flag variable
time = 0
can_complete = True

# Iterate through each job
for A, B in jobs:
    # Check if the job can be completed before its deadline
    if time + A > B:
        can_complete = False
        break
    # Update current time
    time += A

# Print the result
if can_complete:
    print("Yes")
else:
    print("No")