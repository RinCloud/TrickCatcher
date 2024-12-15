
S = input()
K = int(input())
m = 0

if len(set(list(S))) == 1:
    print((len(S) * K) // 2)
    exit()

if S[0] == S[-1]:
    diff_start = 1
    i = 1
    while S[i] == S[i+1] and i < len(S)-1:
        diff_start += 1
        i += 1

else:
    diff_start = 0

# the condition to be checked regarding the different chars and count of the same chars are incorrect. dif_start = 0 for different chars at the start
# of string
if S[0] != S[-1]:
    cnt = 0
else:
    cnt = 1

# correct the condition of the last comparison s[j] to S[i]
for i in range(1, len(S)):
    if S[i-1] == S[i]:
        m += 1
    else:
        cnt += m//2
        m = 0


print(cnt*K + (m*K - m)//2 + diff_start*K - diff_start)
