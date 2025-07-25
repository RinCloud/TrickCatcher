def starts_one_ends(n):
    # Initialize count
    count = 0
    
    # Iterate from 1 to n
    for i in range(1, 10**n + 1):
        # Check if the number starts or ends with 1
        if str(i)[0] == '1' or str(i)[-1] == '1':
            count += 1
    
    return count