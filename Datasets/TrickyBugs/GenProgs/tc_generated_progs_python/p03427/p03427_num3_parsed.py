N = input()
if len(N) > 1:
    print(int(N[0]) - 1 + 9 * (len(N) - 1) + int(N[-1]) // 9)
else:
    print(int(N))
