# Given Input
K = int(input())

# Check if K is divisible by 7
if K % 7 == 0:
    print(-1)
    exit()

# Initialize the number and position
num = 7
pos = 1

# Check if the number is divisible by K
while num % K != 0:
    # Add 7 to the number
    num = num * 10 + 7
    # Increment the position
    pos += 1

# Output the position
print(pos)