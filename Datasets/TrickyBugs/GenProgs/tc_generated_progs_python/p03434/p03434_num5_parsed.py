n = int(input())
a = [int(x) for x in input().split()]

a.sort()
print(sum(a[:n:2]) - sum(a[1:n:2]))