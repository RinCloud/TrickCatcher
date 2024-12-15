n = int(input())
a = [int(x) for x in input().split()]

a.sort()
Alice_score = sum(a[n-1::-2])
Bob_score = sum(a[n-2::-2])

print(Alice_score - Bob_score)