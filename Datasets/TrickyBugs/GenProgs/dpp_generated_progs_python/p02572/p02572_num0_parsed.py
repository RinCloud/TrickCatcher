# I will start by reading the input values

n = int(input())
a = list(map(int, input().split()))

# Now I will calculate the sum of product of every pair of elements i and j

sum_product = 0

for i in range(n-1):
    for j in range(i+1, n):
        sum_product += a[i] * a[j]

# Finally, I will print the sum_product modulo (10^9+7)

print(sum_product % int(1e9+7))