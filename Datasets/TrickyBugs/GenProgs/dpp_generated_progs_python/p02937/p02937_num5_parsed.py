s = input() # Read the string s
t = input() # Read the string t

# Concatenate 10^100 copies of s
s_prime = s * (10**100)

# Check if t is a subsequence of s_prime
if t in s_prime:
    # Calculate the minimum i
    i = s_prime.index(t) + 1
    print(i)
else:
    print(-1)