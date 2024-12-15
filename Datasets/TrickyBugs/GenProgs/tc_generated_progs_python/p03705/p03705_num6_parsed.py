N, A, B = map(int, input().split())

if A > B:
    print(0)
else:
    if N == 1:
        if A == B:
            print(1)
        else:
            print(0)
    else:
        print((B - A) * (N - 2) + 1)
