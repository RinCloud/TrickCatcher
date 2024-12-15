def fibfib(n: int):
    if n == 0:
        return 0
    elif n == 1:
        return 0
    elif n == 2:
        return 1
    else:
        fibfib1 = 0
        fibfib2 = 0
        fibfib3 = 1
        for i in range(3, n+1):
            fibfib1, fibfib2, fibfib3 = fibfib2, fibfib3, fibfib1 + fibfib2 + fibfib3
        return fibfib3