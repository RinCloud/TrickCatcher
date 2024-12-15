def fib4(n: int):
    if n == 0:
        return 0
    elif n == 1:
        return 0
    elif n == 2:
        return 2
    elif n == 3:
        return 0
    else:
        fib_list = [0, 0, 2, 0]
        for i in range(4, n + 1):
            next_num = fib_list[i-1] + fib_list[i-2] + fib_list[i-3] + fib_list[i-4]
            fib_list.append(next_num)
        return fib_list[n]