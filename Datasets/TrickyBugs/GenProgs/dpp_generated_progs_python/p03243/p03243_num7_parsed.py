N = int(input())

for i in range(N, 1000):
    digits = list(str(i))
    if digits[0] == digits[1] == digits[2]:
        print(i)
        break