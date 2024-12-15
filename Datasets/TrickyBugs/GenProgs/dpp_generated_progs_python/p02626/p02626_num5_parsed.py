N = int(input())
A = list(map(int, input().split()))

# Calculate the total XOR of the piles
xor_piles = 0
for val in A:
    xor_piles ^= val

# If the total XOR is 0, Takahashi cannot win
if xor_piles == 0:
    print(-1)
    exit()

# Find the rightmost set bit in the total XOR
rightmost_set_bit = xor_piles & -xor_piles

# Get the number of stones to guarantee Takahashi's win
guarantee_stones = 0
for val in A:
    if val & rightmost_set_bit:
        guarantee_stones += 1

print(guarantee_stones)