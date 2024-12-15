# Takahashi's Mind

S = input()

mind = 0

for symbol in S:
  if symbol == '+':
    mind += 1
  elif symbol == '-':
    mind -= 1

print(mind)