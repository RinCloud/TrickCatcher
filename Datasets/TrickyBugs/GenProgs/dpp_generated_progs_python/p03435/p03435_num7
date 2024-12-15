c_11, c_12, c_13 = map(int, input().split())
c_21, c_22, c_23 = map(int, input().split())
c_31, c_32, c_33 = map(int, input().split())

# Calculate the values of a_i and b_j
a1 = c_11 - c_13
a2 = c_12 - c_13
a3 = c_13
b1 = c_11 - c_21
b2 = c_12 - c_22
b3 = c_13 - c_23

# Check if Takahashi's statement is correct
if c_11 == a1 + b1 and c_12 == a1 + b2 and c_13 == a1 + b3 and \
   c_21 == a2 + b1 and c_22 == a2 + b2 and c_23 == a2 + b3 and \
   c_31 == a3 + b1 and c_32 == a3 + b2 and c_33 == a3 + b3:
    print("Yes")
else:
    print("No")