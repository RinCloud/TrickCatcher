def fibfib(n: int):
    if n == 0:
        return 0
    elif n == 1:
        return 0
    elif n == 2:
        return 1
    else:
        fibfib_lst = [0, 0, 1]
        for i in range(3, n+1):
            fibfib_lst.append(fibfib_lst[i-1] + fibfib_lst[i-2] + fibfib_lst[i-3])
        return fibfib_lst[n]