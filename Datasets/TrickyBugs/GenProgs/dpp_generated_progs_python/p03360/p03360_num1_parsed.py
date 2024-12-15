A, B, C = map(int, input().split())
K = int(input())

numbers = [A, B, C]
for i in range(K):
    numbers.sort()
    numbers[-1] *= 2

print(sum(numbers))