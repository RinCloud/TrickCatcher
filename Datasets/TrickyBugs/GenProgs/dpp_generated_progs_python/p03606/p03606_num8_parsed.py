# Getting the number of groups from user
N = int(input())

# Initializing the count of people sitting in theater
count = 0

# Looping through each group
for i in range(N):
    # Getting the seat range for the group from user
    l, r = map(int, input().split())
    # Adding the number of seats in the range to the count
    count += r - l + 1

# Printing the count of people sitting in theater
print(count)