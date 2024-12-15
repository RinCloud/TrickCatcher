# Taking input from user
N = int(input())

# Initializing the maximum count to 0
max_count = 0

# Initializing the number with maximum count to 1
max_num = 1

# Looping from 1 to N (inclusive)
for i in range(1, N+1):
    count = 0
    num = i

    # Finding the number of times the integer can be divided by 2
    while num % 2 == 0:
        count += 1
        num = num // 2
    
    # Updating the maximum count and number with maximum count
    if count > max_count:
        max_count = count
        max_num = i

# Printing the number with maximum count
print(max_num)