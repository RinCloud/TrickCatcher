# Read the values of A and B from input
A, B = map(int, input().split())

# Calculate the minimum number of power strips required
# If B is already greater than or equal to A, then only 1 power strip is needed
# Otherwise, divide the number of empty sockets (B) by the number of sockets in each power strip (A)
# If there is any remainder, add 1 to account for the extra power strip needed
min_power_strips = 1 if B >= A else (B // A) + 1 if B % A != 0 else B // A

# Print the minimum number of power strips required
print(min_power_strips)