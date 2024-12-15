# Read input values
N = int(input())
S = input()

# Initialize count
count = 0

# Iterate through each character of S
for i in range(N-2):
  # Check if current substring forms "ABC"
  if S[i:i+3] == "ABC":
    count += 1
    
# Print the count
print(count)
