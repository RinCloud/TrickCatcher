n = int(input())
a = [int(x) for x in input().split()]

a.sort(reverse=True)
alice_sum = sum(a[0:n:2])
bob_sum = sum(a[1:n:2])
print(alice_sum - bob_sum)
