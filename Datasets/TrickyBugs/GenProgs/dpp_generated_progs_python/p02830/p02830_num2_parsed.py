# Getting input values
N = int(input())
S, T = input().split()

# Creating empty string
result = ''

# Forming new string by alternating characters
for i in range(N):
    result += S[i] + T[i]

# Printing new string
print(result)