MOD = 998244353

# Read the input
N, K = map(int, input().split())

# Initialize the counts for blue and red balls eaten
blue_count = 0
red_count = 0

# Calculate the possible ways
ways = 1
for i in range(K):
    # If the blue count is less than the red count, throw in a blue ball
    if blue_count < red_count:
        ways = (ways * (red_count - blue_count)) % MOD
        blue_count += 1
    # Otherwise, throw in a red ball
    else:
        ways = (ways * (blue_count + 1)) % MOD
        red_count += 1

print(ways)