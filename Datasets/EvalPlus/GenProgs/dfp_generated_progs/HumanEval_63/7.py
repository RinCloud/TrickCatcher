def fibfib(n: int):
    if n == 0:
        return 0
    elif n == 1 or n == 2:
        return 1
    else:
        fibfib_nminus1 = 1
        fibfib_nminus2 = 1
        fibfib_nminus3 = 0
        for i in range(3, n+1):
            fibfib_n = fibfib_nminus1 + fibfib_nminus2 + fibfib_nminus3
            fibfib_nminus3 = fibfib_nminus2
            fibfib_nminus2 = fibfib_nminus1
            fibfib_nminus1 = fibfib_n
        return fibfib_n