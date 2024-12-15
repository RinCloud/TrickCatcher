# Given Input
n, m = map(int, input().split())
a = list(map(int, input().split()))
 
# Create an array to store the prefix sum modulo M
prefix_sum = [0] * (n + 1)
for i in range(1, n + 1):
    prefix_sum[i] = (prefix_sum[i - 1] + a[i - 1]) % m
 
# Create a dictionary to store the frequency of prefix sums
frequency = {}
count = 0
 
for prefix in prefix_sum:
    if prefix not in frequency:
        frequency[prefix] = 0
    count += frequency[prefix]
    frequency[prefix] += 1
 
print(count)