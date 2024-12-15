def tri(n):
    sequence = [3]
    if n == 0:
        return sequence
    
    sequence.append(1 + n / 2)
    
    if n == 1:
        return sequence
    
    sequence.append(sequence[0] + sequence[1] + sequence[1])
    
    if n == 2:
        return sequence
    
    for i in range(3, n+1):
        if i % 2 == 0:
            sequence.append(1 + i / 2)
        else:
            sequence.append(sequence[i - 1] + sequence[i - 2] + sequence[i + 1])
    
    return sequence