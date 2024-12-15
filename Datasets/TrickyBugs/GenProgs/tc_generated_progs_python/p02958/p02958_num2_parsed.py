def is_possible_to_sort(n, a):
    c = 0
    for i in range(n-1):
        if a[i] != i+1:
            c += 1
    return 'YES' if c < 3 else 'NO'

n = int(input())
a = [int(x) for x in input().split()]
print(is_possible_to_sort(n, a))
