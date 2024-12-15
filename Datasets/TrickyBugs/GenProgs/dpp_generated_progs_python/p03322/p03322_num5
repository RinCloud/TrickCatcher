N = int(input())
S = input()

count = 0
plus_count = 0
minus_count = 0
pointer = 0

for i in range(N):
    if S[i] == '+':
        plus_count += 1
    elif S[i] == '-':
        minus_count += 1
    elif S[i] == '>':
        pointer += 1
    elif S[i] == '<':
        pointer -= 1
        
    if pointer == 0:
        count += (plus_count * minus_count) + plus_count
        plus_count = 0
        minus_count = 0

print(count)