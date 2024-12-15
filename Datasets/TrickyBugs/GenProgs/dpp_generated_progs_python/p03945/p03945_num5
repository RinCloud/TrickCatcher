def min_stones_needed(S):
  count_b = 0
  count_w = 0
  for i in range(len(S)):
    if S[i] == 'B':
      count_b += 1
    elif S[i] == 'W':
      count_w += 1
  if count_b == 0 or count_w == 0:
    return 0
  elif count_b % 2 == 0 and count_w % 2 == 0:
    return 0
  elif count_b % 2 == 0 and count_w % 2 != 0:
    return count_w // 2
  elif count_b % 2 != 0 and count_w % 2 == 0:
    return count_b // 2
  else:
    return (count_b + 1) // 2