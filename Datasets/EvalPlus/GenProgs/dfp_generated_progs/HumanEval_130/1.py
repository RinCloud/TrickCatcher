def tri(n):
    tribonacci = [3]
    
    if n > 0:
        tribonacci.append(1)
    
    if n > 1:
        tribonacci.append(1)
    
    for i in range(3, n+1):
        if i % 2 == 0:
            tribonacci.append(int(1 + i / 2))
        else:
            tribonacci.append(tribonacci[i-1] + tribonacci[i-2] + tribonacci[i-3])
    
    return tribonacci