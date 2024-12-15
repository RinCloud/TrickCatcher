def tri(n):
    tribonacci_sequence = []
    for i in range(n+1):
        if i == 1:
            tribonacci_sequence.append(3)
        elif i % 2 == 0:
            tribonacci_sequence.append(1 + i / 2)
        else:
            tribonacci_sequence.append(tribonacci_sequence[i-1] + tribonacci_sequence[i-2] + tribonacci_sequence[i+1])
    return tribonacci_sequence