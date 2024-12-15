s = input()
t = input()

# Creating the concatenated string
s_prime = s * (10**100)

# Finding if t is a subsequence of s_prime
t_index = 0
for char in s_prime:
    if t_index == len(t):
        break

    if char == t[t_index]:
        t_index += 1

# Determining the minimum value of i
if t_index == len(t):
    i = (len(s_prime) // len(s)) + 1
    print(i)
else:
    print(-1)