N = int(input())
A = list(map(int, input().split()))

# count the number of operations
operations = 0
while all(a % 2 == 0 for a in A):
    operations += 1
    A = [a // 2 for a in A]

print(operations)