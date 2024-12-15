def find_max_operations(N, a):
    count = 0
    for i in range(N):
        while a[i] % 2 == 0:
            a[i] = a[i] // 2
            count += 1
    return count

N = int(input())
a = list(map(int, input().split()))

max_operations = find_max_operations(N, a)
print(max_operations)