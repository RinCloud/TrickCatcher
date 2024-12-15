def tri(n):
    sequence = [3]
    if n == 0:
        return sequence
    sequence.append(1 + (n//2)) if n % 2 == 0 else sequence.append(tri(n-1)[-1] + tri(n-2)[-1] + tri(n+1)[-1])
    return sequence