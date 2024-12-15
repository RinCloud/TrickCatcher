# Program

s = int(input())

sequence = [s]
while True:
    if sequence[-1] % 2 == 0:
        sequence.append(sequence[-1] // 2)
    else:
        sequence.append(3 * sequence[-1] + 1)
    
    if sequence[-1] in sequence[:-1]:
        break

print(len(sequence))