N = int(input())

def lucas_number(N):
    if N == 0:
        return 2
    elif N == 1:
        return 1
    else:
        prev_prev = 2
        prev = 1
        for i in range(2, N+1):
            current = prev + prev_prev
            prev_prev = prev
            prev = current
        return current

print(lucas_number(N))