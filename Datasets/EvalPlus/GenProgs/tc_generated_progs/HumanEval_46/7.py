def fib4(n: int):
    if n == 0:
        return 0
    elif n == 1:
        return 0
    elif n == 2:
        return 2
    elif n == 3:
        return 0
      
    fib_list = [0, 0, 2, 0]  # Initialize the list with values for n=0, n=1, n=2, n=3
    
    for i in range(4, n+1):
        next_fib = sum(fib_list)  # Calculate next element based on the sum of last 4 digits
        fib_list = fib_list[1:] + [next_fib]  # Update the fib_list by removing first element and adding the next_fib
    
    return fib_list[-1]