'''
# Function to calculate the minimum total Magic Points
def min_magic_points(H, N, spells):
  
  # Initializing the minimum total Magic Points to infinity
  min_mp = float('inf')
  
  # Sorting the spells based on their Magic Points (B_i)
  spells.sort(key=lambda x: x[1])
  
  # Calculating the minimum total Magic Points through dynamic programming
  dp = [float('inf')] * (H + 1)
  dp[0] = 0
  
  for i in range(N):
    for j in range(H + 1):
      if j >= spells[i][0]:
        dp[j] = min(dp[j], dp[j - spells[i][0]] + spells[i][1])
    min_mp = min(min_mp, dp[H])
    
  # Returning the minimum total Magic Points
  return min_mp

# Reading the input
H, N = map(int, input().split())
spells = []
for _ in range(N):
  A, B = map(int, input().split())
  spells.append((A, B))

# Calling the function to calculate the minimum total Magic Points
result = min_magic_points(H, N, spells)

# Printing the result
print(result)
'''