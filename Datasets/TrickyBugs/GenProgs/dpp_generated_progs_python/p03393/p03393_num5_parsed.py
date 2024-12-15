import string

def find_next_word(S):
  n = len(S)
  if n == 26:
    return "-1"
  
  letters = string.ascii_lowercase
  used = set(S)

  for i in range(n-1, -1, -1):
    for j in range(letters.index(S[i])+1, 26):
      if letters[j] not in used:
        return S[:i] + letters[j]
  
  return "-1"

S = input()
print(find_next_word(S))