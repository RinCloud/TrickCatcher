def tri(n):
    seq = [3] # initialize with the first number of Tribonacci sequence
    for i in range(1, n+1):
        if i % 2 == 0:
            seq.append(1 + i / 2) # if n is even, calculate using the formula tri(n) = 1 + n / 2
        else:
            seq.append(seq[i-1] + seq[i-2] + seq[i+1]) # if n is odd, calculate using the formula tri(n) = tri(n - 1) + tri(n - 2) + tri(n + 1)
    return seq