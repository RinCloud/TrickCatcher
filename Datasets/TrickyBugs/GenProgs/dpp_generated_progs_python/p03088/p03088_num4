MOD = 10**9+7

def count_strings(N):
    # Pre-compute all strings of length N
    strings = [''] * (N+1)
    strings[1] = ['A', 'C', 'G', 'T']
    strings[2] = ['AA', 'AC', 'AG', 'AT', 'CA', 'CC', 'CG', 'CT', 'GA', 'GC', 'GG', 'GT', 'TA', 'TC', 'TG', 'TT']

    for i in range(3, N+1):
        # Generate all valid strings of length i+1 based on strings of length i
        valid_strings = []
        for s in strings[i]:
            for c in ['A', 'C', 'G', 'T']:
                # Check if adding new character to current string forms a valid string
                new_string = s + c
                if 'AGC' not in new_string and 'GAC' not in new_string and 'ACG' not in new_string:
                    valid_strings.append(new_string)

        strings[i+1] = valid_strings

    return len(strings[N]) % MOD

# Get input
N = int(input())

# Output result
print(count_strings(N))