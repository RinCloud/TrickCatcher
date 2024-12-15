n, m = map(int, input().split())
f = sorted([list(map(int, input().split())) for i in range(m)])

# if single digit number
if n == 1:
    # if only one condition
    if m == 1:
        print(f[0][1])
    else:
        # if two or more conditions
        print(-1)
else:
    # for looping through all N-digit numbers
    for i in range(10**(n-1), 10**n):
        d = str(i)
        # looping through each condition
        for b, v in f:
            # if condition is not met
            if int(d[b-1]) != v:
                break
        # If for didn't break, means all conditions are met
        else:
            # Print the number and exit
            print(i)
            exit()
    # If for loop ended, means no such number is found
    print(-1)