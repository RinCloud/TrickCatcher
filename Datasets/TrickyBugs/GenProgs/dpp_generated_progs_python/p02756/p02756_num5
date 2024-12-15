# Program:

# read the initial string
s = input()

# read the number of operations
q = int(input())

# apply each operation
for _ in range(q):
  # read the operation
  operation = input().split()

  # if the operation is reverse
  if operation[0] == '1':
    s = s[::-1]
  # if the operation is add
  elif operation[0] == '2':
    # read the position and the letter
    f = int(operation[1])
    c = operation[2]
    
    # if it should be added to the beginning of the string
    if f == 1:
      s = c + s
    # if it should be added to the end of the string
    elif f == 2:
      s = s + c

# print the final string
print(s)