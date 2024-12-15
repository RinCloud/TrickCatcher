# Finding the number of pairs of integers (u, v) that satisfy the conditions

def count_pairs(N):
    MOD = 1000000007

    # Calculate the total number of bits required to represent N
    num_bits = len(bin(N)) - 2

    # Initialize the count
    count = 0

    # Consider each bit position from 0 to num_bits
    for bit_pos in range(num_bits):
        # Count the number of pairs for each possible bit combination
        cnt = ((N + 1) >> (bit_pos + 2)) * (1 << (bit_pos + 1))
        cnt += max(0, ((N + 1) & ((1 << (bit_pos + 1)) - 1)) - (1 << bit_pos))
        cnt = (cnt << bit_pos) % MOD

        # Update the total count
        count = (count + cnt) % MOD

    return count

# Get the input value of N
N = int(input())

# Calculate and print the number of pairs
print(count_pairs(N))