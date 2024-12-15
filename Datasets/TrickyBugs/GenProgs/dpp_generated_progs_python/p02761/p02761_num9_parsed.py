from itertools import permutations

def find_smallest_integer(N, M, s_c_pairs):
    for i in range(10**N):
        digit_list = list(str(i).zfill(N))
        valid = True
        for s, c in s_c_pairs:
            if int(digit_list[s-1]) != c:
                valid = False
                break
        if valid:
            return i
    return -1

N, M = map(int, input().split())
s_c_pairs = [list(map(int, input().split())) for _ in range(M)]

result = find_smallest_integer(N, M, s_c_pairs)
print(result)