def count_operations(N, a):
    count = 0
    for i in range(N):
        while a[i] % 2 == 0:
            a[i] //= 2
            count += 1
    return count

N = int(input())
a = list(map(int, input().split()))

result = count_operations(N, a)
print(result)