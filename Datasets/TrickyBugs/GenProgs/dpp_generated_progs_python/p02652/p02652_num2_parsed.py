# Getting the input
S = input()

# Counting the number of occurrences of `0` and `1`
count_0 = S.count('0')
count_1 = S.count('1')

# Calculating the minimum unbalancedness
min_unbalancedness = min(count_0, count_1) * 2

print(min_unbalancedness)