
def count_operations(n, lst):
    count = 0
    for i in range(n):
        while lst[i] % 2 == 0:
            count += 1
            lst[i] //= 2
    return count

n = int(input())
lst = list(map(int, input().split()))

result = count_operations(n, lst)
print(result)

