def construct_sequence(N, A, B):
    if A == 1 and B == 1:
        return " ".join(map(str, range(1, N + 1)))
    elif A == 1 or B == 1:
        return "-1"
    elif A + B - 1 > N:
        return "-1"
    else:
        res = list(range(1, A + 1))
        dec_seq = list(range(N, N - B, -1))
        if A + 1 <= N:
            res.append(A + 1)
        res.extend(dec_seq)
        remaining = set(range(1, N + 1)) - set(res)
        res.extend(remaining)
        return " ".join(map(str, res))

# Read input
N, A, B = map(int, input().split())

# Construct and output the sequence
sequence = construct_sequence(N, A, B)
print(sequence)
