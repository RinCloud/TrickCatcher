n = int(input())
a = [int(x) for x in input().split()]

a.sort()
print(sum(a[n-1::-2]) - sum(a[n-2::-2]))