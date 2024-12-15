'''
def find_longest_subsequence(N, K, strings):
    subsequences = set()
    for i in range(N+1):
        for j in range(2**i):
            binary = format(j, '0'+str(i)+'b')
            subsequence = ''
            for k in range(len(strings)):
                if binary[k] == '1':
                    subsequence += strings[k][j]
            subsequences.add(subsequence)
    longest_subsequences = [subsequence for subsequence in subsequences if len(subsequence) >= K]
    longest_subsequences = sorted(longest_subsequences)
    return longest_subsequences[0]

N, K = map(int, input().split())
strings = [input() for _ in range(N+1)]
output = find_longest_subsequence(N, K, strings)
print(output)
'''