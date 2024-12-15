N = int(input())

for i in range(N, 999):
    digits = [int(d) for d in str(i)]
    if len(set(digits)) == 1:
        print(i)
        break