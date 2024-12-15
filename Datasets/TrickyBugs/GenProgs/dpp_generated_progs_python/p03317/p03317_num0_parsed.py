# Generating a Python program to solve the given problem

def minimum_operations(N, K, A):

  # Creating a list to store the minimum value for each operation
  operations = []
  
  # Initializing the minimum value with the largest possible number
  min_value = float('inf')
  
  # Iterating through the sequence
  for i in range(N):
      
    # Updating the minimum value if a smaller value is found
    min_value = min(min_value, A[i])
    
    # If the length of the current sequence is equal to K,
    # we have found a set of K consecutive elements to perform the operation on
    if i >= K - 1:
      
      # Adding the minimum value to the operations list
      operations.append(min_value)
      
      # Resetting the minimum value to the largest possible number
      min_value = float('inf')
  
  # Returning the minimum number of operations required
  return len(set(operations))

# Parsing the input
N, K = map(int, input().split())
A = list(map(int, input().split()))

# Calling the minimum_operations function and printing the result
print(minimum_operations(N, K, A))