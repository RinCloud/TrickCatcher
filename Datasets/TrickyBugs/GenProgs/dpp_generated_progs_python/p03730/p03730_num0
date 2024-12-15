# Solution:

A, B, C = map(int, input().split())

# Check if there is a multiple of A which is congruent to C modulo B
possible = False
for i in range(1, B + 1):
    if (A * i) % B == C:
        possible = True
        break

# Print the result
if possible:
    print("YES")
else:
    print("NO")