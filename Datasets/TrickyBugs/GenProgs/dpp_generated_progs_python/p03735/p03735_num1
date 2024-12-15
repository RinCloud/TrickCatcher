# The solution can be obtained by:
# Sorting the list of values xi - yi
# The first N elements are R values and the next N elements are B values
# Calculate the difference between the maximum and minimum R values and the maximum and minimum B values
# Multiply these differences to obtain the minimum possible value

n = int(input())
bags = []
for _ in range(n):
    x, y = map(int, input().split())
    bags.append(x - y)

bags.sort()
r_max = max(bags[:n])
r_min = min(bags[:n])
b_max = max(bags[n:])
b_min = min(bags[n:])

minimum_value = (r_max - r_min) * (b_max - b_min)
print(minimum_value)