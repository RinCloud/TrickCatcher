n = int(input())
if n % 10 == 0:
    print(1)
else:
    digits = list(map(int, str(n)))
    print(sum(digits))