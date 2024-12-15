n = int(input())
a = list(map(int, input().split()))

p = 200003

sum = 0
for i in range(n):
    for j in range(i+1, n):
        sum += (a[i] * a[j]) % p

print(sum)