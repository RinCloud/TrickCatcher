#taking the input values
N = int(input())
D, X = map(int, input().split())
A = []
for _ in range(N):
    A.append(int(input()))

#calculating the number of chocolate pieces
chocolates = X
for a in A:
    count = 1
    while count * a + 1 <= D:
        chocolates += 1
        count += 1

#printing the result
print(chocolates)