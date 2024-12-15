# Program:

def max_operations(N, a):
    max_operations = 0
    for i in range(N):
        while a[i] % 2 == 0:
            a[i] //= 2
            max_operations += 1
    return max_operations

N = int(input())
a = list(map(int, input().split()))

result = max_operations(N, a)
print(result)