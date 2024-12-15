def find_minimum_f(N):
    def digits(num):
        return len(str(num))

    min_f = float('inf')
    for i in range(1, int(N ** 0.5) + 1):
        if N % i == 0:
            A = i
            B = N // i
            min_f = min(min_f, max(digits(A), digits(B)))
    return min_f

N = int(input())
print(find_minimum_f(N))