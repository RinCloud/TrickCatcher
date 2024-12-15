N = int(input())
S = input()

max_length = 0

for i in range(1, N):
    for j in range(i+1, N+1):
        length = j - i
        if length <= max_length:
            continue
        
        if S[i-1:i+length-1] == S[j-1:j+length-1]:
            max_length = length

print(max_length)