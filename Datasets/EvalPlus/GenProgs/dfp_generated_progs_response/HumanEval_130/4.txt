def tri(n):
    if n == 0:
        return [0]
    tribonacci = [1, 3, 2]
    if n <= 2:
        return tribonacci[:n+1]
    for i in range(3, n+1):
        if i % 2 == 0:
            tribonacci.append(tribonacci[i//2])
        else:
            tribonacci.append(tribonacci[i-1] + tribonacci[i-2] + tribonacci[i+1])
    return tribonacci