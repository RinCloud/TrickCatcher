# Program

S = input()

num_pairs = 0

for i in range(len(S)):
    for j in range(i+1, len(S)+1):
        if int(S[i:j]) % 2019 == 0:
            num_pairs += 1

print(num_pairs)