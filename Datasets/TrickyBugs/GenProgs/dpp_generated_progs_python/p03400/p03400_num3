# Program:

N = int(input())
D, X = map(int, input().split())

chocolates = []
for _ in range(N):
    chocolates.append(int(input()))

count = X

for i in range(D):
    for j in range(N):
        if i % chocolates[j] == 0:
            count += 1

print(count)