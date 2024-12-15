def fibfib(n: int):
    if n == 0:
        return 0
    elif n == 1:
        return 0
    elif n == 2:
        return 1
    else:
        fibfib_prev3 = 0
        fibfib_prev2 = 0
        fibfib_prev1 = 1
        for i in range(3, n+1):
            current = fibfib_prev1 + fibfib_prev2 + fibfib_prev3
            fibfib_prev3, fibfib_prev2, fibfib_prev1 = fibfib_prev2, fibfib_prev1, current
        return current