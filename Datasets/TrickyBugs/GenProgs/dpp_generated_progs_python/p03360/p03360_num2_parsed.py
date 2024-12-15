A, B, C = map(int, input().split())
K = int(input())

numbers = [A, B, C]
numbers.sort(reverse=True)

for i in range(K):
    numbers[0] *= 2

print(sum(numbers))